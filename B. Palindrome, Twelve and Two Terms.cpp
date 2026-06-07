#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll n;
    cin >> n;
    ll a=n%10;
    if(n==10){
        cout<<-1<<endl;
    }
    else {
        if(a!=10){
            cout<<a<<" "<<n-a<<endl;
        }
        else {
            cout<<22<<" "<<n-22<<endl;
        }
    }


}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
