#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll n,m;
    cin>>n>>m;
    if(n>m) swap(n,m);
    vector<ll>v(n*m);
    for(int i=0; i<n*m; i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    ll mn=v[0];
    ll smn=v[1];
    ll mx=v[n*m-1];
    ll smx=v[n*m-2];
    ll vl=(mx-mn)*((n*m)-n);

    ll ans1=vl,ans2=vl;
    for(int i=1; i<n; i++)
    {
        ans1+=(mx-smn);
    }

    for(int i=1; i<n; i++)
    {
        ans2+=(smx-mn);
    }




    cout<<max(ans1,ans2)<<endl;





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
