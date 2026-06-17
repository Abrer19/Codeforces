#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll n,m;
    cin>>n>>m;
    ll a[n][m];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>a[i][j];
        }
    }
    ll ans=-1;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {

            ll sum=0;
            for(int k=i,l=j; k<n && l<m; k++,l++)
            {
                sum+=a[k][l];
            }

            for(int k=i,l=j; k>=0 && l<m; k--,l++)
            {
                sum+=a[k][l];
            }

            for(int k=i,l=j; k<n && l>=0; k++,l--)
            {
                sum+=a[k][l];
            }

            for(int k=i,l=j; k>=0 && l>=0; k--,l--)
            {
                sum+=a[k][l];
            }

            sum-=3*(a[i][j]);
            ans=max(ans,sum);

        }
    }


    cout<<ans<<endl;

}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }

}
