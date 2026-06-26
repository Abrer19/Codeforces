#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    string s;
    cin>>s;
    ll n=s.size();
    stack<ll>upper,lower;
    vector<ll>vis(n,0);
    for(int i=0; i<n; i++)
    {

        if(s[i]=='b')
        {
            if(!lower.empty())
            {
                ll q=lower.top();
                lower.pop();
                vis[q]=1;
            }
            vis[i]=1;
        }
        else if(s[i]=='B')
        {
            if(!upper.empty())
            {
                ll q=upper.top();
                upper.pop();
                vis[q]=1;
            }
            vis[i]=1;

        }
        else if(s[i]>='a' && s[i]<='z')
        {
            lower.push(i);
        }
        else if(s[i]>='A' && s[i]<='Z')
        {
            upper.push(i);
        }
    }

    string ans="";
    for(int i=0; i<n; i++)
    {
        if(!vis[i])
        {
            ans+=s[i];
        }
    }


    cout<<ans<<endl;




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
