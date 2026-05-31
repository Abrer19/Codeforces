#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll n;
    cin>>n;
    ll a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    ll mid=n/2;
    ll cnt1=0,cnt2=0;
    for(int i=0; i<mid; i++)
    {
        if(a[i]!=a[mid]) cnt1++;
    }
    for(int i=mid+1; i<n; i++)
    {
        if(a[i]!=a[mid]) cnt2++;
    }


    cout<<max(cnt1,cnt2)<<endl;

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
