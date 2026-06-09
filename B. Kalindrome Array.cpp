#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool isPalindrome(vector<ll>&v,ll x)
{
    vector<ll>vv;

    for(int i=0; i<v.size(); i++)
    {
        if(v[i]!=x)
        {
            vv.push_back(v[i]);
        }
    }
    ll l=0,r=vv.size()-1;
    while(l<=r)
    {
        if(vv[l]!=vv[r])
        {
            return false;
        }
        l++;
        r--;
    }
    return true;
}
void solve()
{
    ll n;
    cin>>n;
    vector<ll>v(n);
    ll x,y;
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    ll l=0,r=n-1;
    while(l<=r)
    {
        if(v[l]!=v[r])
        {
            x=v[l];
            y=v[r];

            if(isPalindrome(v,x) || isPalindrome(v,y))
            {
                cout<<"YES"<<endl;
                return;
            }
            else
            {
                cout<<"NO"<<endl;
                return;
            }
        }
        l++;
        r--;
    }


    cout<<"YES"<<endl;

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
