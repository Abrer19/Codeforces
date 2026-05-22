#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll n;
    cin>>n;
    ll a[n];
    vector<ll>v6,v2,v3,v0;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<n; i++)
    {
        if(a[i]%3==0  && a[i]%2==0)
        {
            v6.push_back(a[i]);
        }
        else if(a[i]%3==0)
        {
            v3.push_back(a[i]);
        }
        else if(a[i]%2==0)
        {
            v2.push_back(a[i]);
        }
        else
        {
            v0.push_back(a[i]);
        }
    }
    for(ll x : v6) cout << x << " ";
    for(ll x : v2) cout << x << " ";
    for(ll x : v0) cout << x << " ";
    for(ll x : v3) cout << x << " ";
    cout << "\n";
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
