#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll n;
    cin>>n;
    string s;
    cin>>s;

    string ans=" ";

    for(char c='a'; c<='z'; c++)
    {
        if(s.find(c)==string::npos)
        {
            ans=c;
            break;
        }
    }


    for(char c1='a'; c1<='z'; c1++)
    {
        for(char c2='a'; c2<='z'; c2++)
        {
            string temp;
            temp.push_back(c1);
            temp.push_back(c2);
            if(ans==" " && (s.find(temp)==string::npos))
            {
                ans=temp;
                break;
            }
        }

    }



    for(char c1='a'; c1<='z'; c1++)
    {
        for(char c2='a'; c2<='z'; c2++)
        {
            for(char c3='a'; c3<='z'; c3++)
            {
                string temp;
                temp.push_back(c1);
                temp.push_back(c2);
                temp.push_back(c3);

                if(ans==" " && (s.find(temp)==string::npos))
                {
                    ans=temp;
                    break;
                }

            }
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
