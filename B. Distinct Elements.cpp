#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
ll n;
cin>>n;
vector<ll>v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}
vector<ll>ans(n);
ans[0]=1;
ll c=2;

for(int i=1;i<n;i++){
    ll diff=v[i]-v[i-1];
    if(diff>i){
        ans[i]=c++;
    }
    else {
        ans[i]=ans[i-diff];
    }
}

for(int i=0;i<n;i++){
    cout<<ans[i]<<" ";
}

cout<<endl;


}
int main(){
ll t;
cin>>t;
while(t--){
    solve();
}



}
