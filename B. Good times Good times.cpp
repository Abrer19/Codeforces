#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
ll n;
cin>>n;
ll cnt=0;
while(n>10){
    n=n/10;
    cnt++;
}

cout<<1;
for(int i=0;i<cnt;i++){
    cout<<0;
}
cout<<1<<endl;


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
