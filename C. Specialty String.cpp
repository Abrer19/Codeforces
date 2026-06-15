#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll n;
    cin>>n;
    string s;
    cin>>s;
    stack<char>st;

    for(int i=0;i<n;i++){
       if(!st.empty() && st.top()==s[i]){
          st.pop();
       }
       else {
          st.push(s[i]);
       }

    }

    if(st.empty()) cout<<"YES"<<endl;
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
