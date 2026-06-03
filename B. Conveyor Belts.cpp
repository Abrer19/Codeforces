#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll n,a,b,c,d;
    cin>>n>>a>>b>>c>>d;

    a=min(a,n-a+1);
    b=min(b,n-b+1);
    ll l1=min(a,b);

    c=min(c,n-c+1);
    d=min(d,n-d+1);
    ll l2=min(c,d);

    cout<<abs(l1-l2)<<endl;



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
