#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll k;
    cin>>k;
    ll a1,a2,b1,b2;
    cin>>a1>>b1;
    cin>>a2>>b2;
    ll alice=a1+a2;
    ll bob=b1+b2+k;
    if(alice>bob)
    {
       cout<<"NO"<<endl;
    }
    else if(alice==bob)
    {
        if(a1>b1 && a2>b2)
        {
           cout<<"NO"<<endl;
        }
        else cout<<"YES"<<endl;

    }

    else
    {
        cout<<"YES"<<endl;
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
