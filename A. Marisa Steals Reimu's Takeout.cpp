#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    int n;
    cin>>n;
    int a[n];
    int z=0,o=0,t=0;
    for(int i=0; i<n; i++)  cin>>a[i];
    for(int i=0; i<n; i++)
    {
        if(a[i]==0) z++;
        else if(a[i]==1) o++;
        else t++;
    }
    int ans=z+min(t,o);
    int extra=0;
    if(t>o)
    {
        extra=t-o;
        ans+=(extra/3);
    }
    else if(o>t)
    {
        extra=o-t;
        ans+=(extra/3);
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
