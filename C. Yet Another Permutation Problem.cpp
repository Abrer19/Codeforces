#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    ll n;
    cin>>n;
    cout<<1<<" ";
    vector<ll>v;
    bool mark[n+1]={};
    mark[1]=true;
    for(int i=2;i<=n;i++){
        if(mark[i]) continue;
        for(int j=i;j<=n;j=j*2){
            mark[j]=true;
            v.push_back(j);
        }
    }

    for(int i=0;i<n-1;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;




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
