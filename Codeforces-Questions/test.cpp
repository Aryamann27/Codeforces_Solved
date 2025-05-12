#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    int m;
    cin >> n;
    vector<ll> vec(n);
    map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
        mp[vec[i]] = i;
    }

    cin >> m;
    vector<ll> b(m);
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    ll v = 0, p = 0;
    for (int i = 0; i < m; i++)
    {
        v += mp[b[i]] + 1;
        p += (n - mp[b[i]]);
    }
    cout<<v<<" "<<p<<'\n';
}
int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int t;
    // cin >> t;
    t = 1;

    while (t--)
    {
        solve();
    }

    return 0;
}