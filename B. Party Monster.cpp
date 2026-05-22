#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int cnt=0;

    for(int i=0; i<n; i++)
    {
        if(s[i]=='(')
        {
            cnt++;
        }
        else
        {
            cnt--;
        }
    }

    if(cnt==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;


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
