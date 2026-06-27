#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll cnt0=0,cnt1=0;
    for(int i=0; i<n; i++)
    {
        if(s[i]=='0') cnt0++;
        else cnt1++;
    }

    if(cnt0%2!=0)
    {
        cout<<cnt0<<endl;
        for(int i=0; i<n; i++)
    {
        if(s[i]=='0')
            {
                cout<<i+1<<" ";
            }
        }
        cout<<endl;

    }

    else if(cnt1%2==0)
    {
        cout<<cnt1<<endl;
        for(int i=0; i<n; i++)
    {
        if(s[i]=='1')
            {
                cout<<i+1<<" ";
            }
        }
        cout<<endl;
    }

    else
    {
        cout<<-1<<endl;
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
