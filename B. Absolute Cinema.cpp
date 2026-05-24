#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll n;
    cin>>n;
    ll a[n];
    ll b[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<n; i++)
    {
        cin>>b[i];
    }
    for(int i=0; i<n; i++)
    {
        if(a[i]>b[i])
        {
            swap(a[i],b[i]);
        }
    }
    ll maxi=-1e9;
    for(int i=0; i<n; i++)
    {
        maxi=max(maxi,a[i]);
    }
    ll sum=0;
    for(int i=0; i<n; i++)
    {
        sum+=b[i];
    }


    cout<<sum+maxi<<endl;

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
