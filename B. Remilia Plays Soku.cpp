#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll n,x1,x2,k;
    cin>>n>>x1>>x2>>k;
    if(n<=3) {
        cout<<1<<endl;
        return;
    }
    int mndis=min(abs(x1-x2)+k,n-abs(x1-x2)+k);
    cout<<mndis<<endl;
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
