#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll n,x,y,z;
    cin>>n>>x>>y>>z;
    ll n2=n;
    ll ans1=0,ans2=0;
    while(n>0)
    {
        n=n-x;
        n=n-y;
        ans1++;
    }


    ans2+=z;
    n2-=x*z;

    while(n2>0)
    {
        n2=n2-x;
        n2=n2-(10*y);
        ans2++;
    }

    cout<<min(ans1,ans2)<<endl;


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
