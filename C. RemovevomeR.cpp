#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll cnt=0;
    for(int i=0; i<n-1; i++)
    {
        if(s[i]!=s[i+1])
        {
            cnt++;
        }


    }


    if(cnt==1)
    {
        cout<<2<<endl;
    }
    else
    {
        cout<<1<<endl;
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
