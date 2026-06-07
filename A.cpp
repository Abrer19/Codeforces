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
sort(a,a+n);
reverse(a,a+n);
bool flag=true;
for(int i=2;i<n;i++){
    if((a[i-2]%a[i-1])!=a[i]){
        flag=false;
    }
}

if(!flag){
    cout<<-1<<endl;
}
else {
    cout<<a[0]<<" "<<a[1]<<endl;
}




}
int main(){
ll t;
cin>>t;
while(t--){
    solve();
}


}
