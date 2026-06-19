#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll n,m;
    cin>>n>>m;
    ll a[n][m];
    ll x=1;
    if(m==1)
    {
        for(int i=0; i<n; i++)
        {
            cout<<x<<endl;
            x++;
        }
        return;
    }


    int odd=1;
    int even=2;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(i%2==1)
            {
                a[i][j]=odd;
                odd+=2;
            }
            else
            {
                a[i][j]=even;
                even+=2;
            }
        }
    }

    if(even-2>n*m || odd-2>n*m)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
    }

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
