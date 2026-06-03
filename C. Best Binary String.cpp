#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
string s;
cin>>s;
ll cnt=0;
for(int i=0;i<s.size();i++){
    if(s[i]=='?') cnt++;
}
if(cnt==s.size()){
    for(int i=0;i<s.size();i++){
        cout<<0<<" ";
    }
    cout<<endl;
    return;
}

string a=" ";
for(int i=0;i<s.size();i++){
if(s[i]!='?'){
    a=s[i];
    break;
}
}

s=a+s;
for(int i=1;i<s.size();i++){
    if(s[i]=='?'){
        s[i]=s[i-1];
    }
}

for(int i=1;i<s.size();i++){
   cout<<s[i];
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
