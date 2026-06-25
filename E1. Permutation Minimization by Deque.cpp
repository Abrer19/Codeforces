#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    ll n;
    cin >> n;

    ll a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];

    deque<ll> q;
    q.push_back(a[0]);

    for(int i = 1; i < n; i++)
    {
        if(a[i] < q.front())
            q.push_front(a[i]);
        else
            q.push_back(a[i]);
    }

    for(auto x : q)
        cout << x << " ";

    cout << endl;
}

int main()
{
    ll t;
    cin >> t;

    while(t--)
        solve();
}
