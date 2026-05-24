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
int sum=0;
for(int i=0;i<n;i++){
    sum+=a[i];
}
int avg=sum/n;
sort(a,a+n);
int ans=((avg-a[0])+(a[n-1]-avg)+1)/2;
cout<<ans<<endl;

}



int main(){
ll t;
cin>>t;
while(t--){
    solve();
}


}
