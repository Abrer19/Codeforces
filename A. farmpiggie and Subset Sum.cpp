#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
ll n;
cin>>n;
ll a[n];
for(int i=1;i<=n;i++){
    a[i]=i;
}
for(int i=1;i<=n-1;i=i+2){
    swap(a[i],a[i+1]);
}

for(int i=1;i<=n;i++){
    cout<<a[i]<<" ";
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
