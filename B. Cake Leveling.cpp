#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
ll n;
cin>>n;
ll a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
vector<ll>prefix(n);
prefix[0]=a[0];
for(int i=1;i<n;i++){
    prefix[i]=a[i]+prefix[i-1];
}

for(int i=1;i<n;i++){
    prefix[i]=min(prefix[i-1],(prefix[i]/(i+1)));
}

for(int i=0;i<n;i++){
    cout<<prefix[i]<<" ";
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

