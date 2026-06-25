#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    string s1,s2;
    cin>>s1;
    cin>>s2;
    ll ans=0;
    if(s2.size()==1 && s2[0]=='a')
    {
        cout<<1<<endl;
        return;

    }
    for(int i=0; i<s2.size(); i++)
    {
        if(s2[i]=='a')
        {
            cout<<-1<<endl;
            return;
        }
    }

    cout << (1LL << s1.size()) << endl;

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
