#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
int ans=0;
for(int i=1;i<=n;i++){
    int mini=1e9;
    for(int j=0;j<i;j++){
        mini=min(mini,a[j]);
    }

    ans+=mini;
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
