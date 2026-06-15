#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll n;
    cin>>n;
    string a;
    cin>>a;
    ll cnt0=0,cnt1=0;
    for(int i=0; i<n; i++)
    {
        if(a[i]=='0') cnt0++;
        else cnt1++;
    }

    if(cnt1==n)
    {
        cout<<"DRAW"<<endl;
        return;
    }

    if(cnt0==1)
    {
        cout<<"BOB"<<endl;
        return;
    }

    if(cnt0%2!=0)
    {
        cout<<"ALICE"<<endl;
    }
    else cout<<"BOB"<<endl;


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
