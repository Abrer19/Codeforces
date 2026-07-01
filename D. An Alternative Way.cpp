#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll n;
    cin>>n;
    ll a[n];
    ll b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    for(int i=n-1;i>0;i--){
        if(a[i]>b[i]){
            int extra=a[i]-b[i];
            a[i]=b[i];
            a[i-1]+=extra;
        }
    }

    if(a[0]>b[0]){
        cout<<"NO"<<endl;
    }
    else {
        cout<<"YES"<<endl;
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

