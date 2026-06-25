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
ll zr=0,on=0;
for(int i=0;i<n;i++){
    if(a[i]==0) zr++;
    if(a[i]==1) on++;
}

if(zr==0){
    cout<<"NO"<<endl;
    return;
}

if(zr==1){
    cout<<"YES"<<endl;
    return;
}

if(zr>=2 && on>=1){
     cout<<"YES"<<endl;
}
else {
     cout<<"NO"<<endl;
}

}
int main(){
ll t;
cin>>t;
while(t--){
    solve();
}



}






