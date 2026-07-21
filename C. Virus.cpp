#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll n,m;
    cin>>n>>m;
    vector<ll>v(m);
    for(int i=0; i<m; i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    vector<ll>d(m);
    for(int i=0; i<m-1; i++)
    {
        d.push_back(v[i+1]-v[i]-1);
    }
    d.push_back(v[0]+n-v[m-1]-1);
    sort(d.rbegin(),d.rend());
    ll s=0,dy=0;
    for(auto x:d)
    {
        ll t=x-2*dy;
        if(t>0)
        {
            if(t==1)
            {
                s++;
                dy++;
            }
            else
            {
                s+=(t-1);
                dy+=2;
            }
        }
    }


    cout<<(n-s)<<endl;






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
