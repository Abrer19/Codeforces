#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll n;
    cin>>n;
    ll a[n],b[n],c[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        c[i]=a[i];
    }
    sort(c,c+n);
    for(int i=0; i<n; i++)
    {
        cin>>b[i];
    }
    ll cnt=0;
    for(int i=0; i<n; i++)
    {
        if(c[i]>b[i])
        {
            cout<<-1<<endl;
            return;
        }
    }

    for(int i=0; i<n; i++)
    {
        if(a[i]>b[i])
        {
            int idx=0;
            for(int j=i+1; j<n; j++)
            {
                if(a[j]<=b[i])
                {
                    idx=j;
                    break;
                }
            }


            for(int k=idx; k>i; k--)
            {
                swap(a[k],a[k-1]);
                cnt++;
            }
        }
    }




    cout<<cnt<<endl;

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
