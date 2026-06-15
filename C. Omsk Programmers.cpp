#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll a,b,c;
    cin>>a>>b>>c;
    ll ans=abs(a-b);
    ll op=0;
    if(b>a){
        swap(a,b);
    }
    if(c>a && c>b){
        cout<<min(int(ans),2)<<endl;
        return;
    }
    ll ans2=1e9;
    while(a>b){
        a=a/c;
        op++;
        if(b>a) swap(a,b);
        ans2=min(op+abs(a-b),ans2);
    }

    cout<<min(ans,ans2)<<endl;

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
