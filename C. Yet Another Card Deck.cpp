#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    ll n,m;
    cin>>n>>m;

    vector<ll> a(n);

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    vector<ll> b(m);

    for(int i=0; i<m; i++)
    {
        cin>>b[i];
    }

    for(int i=0; i<m; i++)
    {
        ll t=b[i];

        for(int j=0; j<n; j++)
        {
            if(a[j]==t)
            {
                cout<<j+1<<" ";

                for(int k=j; k>=1; k--)
                {
                    a[k]=a[k-1];
                }

                a[0]=t;
                break;
            }
        }
    }

    cout<<endl;
}

int main()
{
    solve();
}
