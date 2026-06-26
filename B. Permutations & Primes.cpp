#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll n;
    cin>>n;
    vector<ll>v(n,-1);
    v[0]=2;
    v[n-1]=3;
    v[n/2]=1;
    int j=4;
    for(int i=1; i<n; i++)
    {
        if(v[i]==-1){
            v[i]=j;
            j++;
        }
    }


    for(int i=0;i<n;i++){
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
