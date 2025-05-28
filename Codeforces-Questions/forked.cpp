#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll dx[4] = {-1, 1, -1, 1}, dy[4] = {-1, -1, 1, 1};

    ll a, b, xk, yk, xq, yq;
    cin >> a >> b;
    cin >> xk >> yk >> xq >> yq;

    set<pair<ll, ll>> s1, s2;

    for (int i = 0; i < 4; i++)
    {
        s1.insert({xk + dx[i] * a, yk + dy[i] * b});
        s2.insert({xq + dx[i] * a, yq + dy[i] * b});

        s1.insert({xk + dx[i] * b, yk + dy[i] * a});
        s2.insert({xq + dx[i] * b, yq + dy[i] * a});
    }

    ll ans = 0;
    for (auto x : s1)
    {
        if (s2.find(x) != s2.end())
        {
            ans++;
        }
    }
    cout << ans << '\n';
}

main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}