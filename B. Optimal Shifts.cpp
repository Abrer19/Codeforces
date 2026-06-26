#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
ll n;
cin>>n;
string s;
cin>>s;
string t=s+s;
ll cnt=0;
ll ans=0;
for(int i=0;i<2*n;i++){
    if(t[i]=='0'){
        cnt++;
        ans=max(cnt,ans);
    }
    else {
        cnt=0;
    }
}


cout<<ans<<endl;

}
int main(){
ll t;
cin>>t;
while(t--){
    solve();
}





}
