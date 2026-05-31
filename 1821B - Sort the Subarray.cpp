#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll n;
    cin>>n;
    ll a[n],b[n];
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<n; i++) cin>>b[i];
    ll l=-1,r=-1;
    for(int i=0; i<n; i++)
    {
        if(a[i]!=b[i])
        {
            if(l==-1)
            {
                l=i;
            }

            else
            {
                r=i;
                break;
            }
        }
    }

    int i=l-1;

    while(i>=0)
    {
        if(b[i]<=b[i+1])
        {
            i--;
        }
        else break;
    }
    l=i+1;


    if(r==-1) r=n-1;
    int j=r+1;

    while(j<n)
    {
        if(b[j]>=b[j-1])
        {
            j++;
        }
        else break;
    }

    r=j-1;


    cout<<l+1<<" "<<r+1<<endl;

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




