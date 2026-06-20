#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll n;
    cin>>n;
    for(int i=n;i>0;i--){
        cout<<i<<" ";
    }
    cout<<n<<" ";
    for(int i=1;i<=n-1;i++){
        cout<<i<<" ";
    }
    cout<<endl;


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
