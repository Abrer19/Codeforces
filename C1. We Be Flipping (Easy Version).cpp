#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll n;
    cin>>n;
    vector<ll>a(n);
    vector<ll>ans;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    bool flag=false;
    for(int i=n-1;i>=0;i--){
        if(!flag && a[i]>0){
            ans.push_back(i+1);
            flag=true;
        }
        else if(flag && a[i]<0){
            ans.push_back(i+1);
            flag=false;
        }
    }

    cout<<ans.size()<<endl;
    for(int i=ans.size()-1;i>=0;i--){
        cout<<ans[i]<<" ";
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
