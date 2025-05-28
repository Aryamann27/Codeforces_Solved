#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;

void solve()
{
    ll n;
    cin >> n;

    ll k = cbrt(n);
    ll ans;

    map<ll, ll> mp;
    for (ll i = 1; i <= k; i++)
    {
        mp[i * i * i]++;
    }

    for (ll i = 1; i <= k; i++)
    {
        if (mp[n - i * i * i] != 0)
        {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
}

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}