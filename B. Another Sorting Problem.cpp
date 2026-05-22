#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll n;
    cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    int diff=0;
    for(int i=1; i<n; i++)
    {
        if(v[i]<v[i-1])
        {
            diff=max(diff,v[i-1]-v[i]);
        }
    }


    for(int i=1; i<n; i++)
    {
        if(v[i]<v[i-1])
        {
            v[i]+=diff;
        }
    }
    if(is_sorted(v.begin(),v.end()))
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
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
