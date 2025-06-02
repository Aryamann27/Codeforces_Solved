#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
vector<ll> spf(100001);

void pre()
{
    spf[0] = spf[1] = 1;
    for (int i = 2; i <= 100000; i++)
        spf[i] = i;
    for (int i = 2; i <= 100000; i++)
    {
        if (spf[i] == i)
        {
            for (int j = 2 * i; j <= 100000; j += i)
            {
                if (spf[j] == j)
                    spf[j] = i;
            }
        }
    }
}

pair<ll, ll> red_comp(ll num, ll k)
{
    map<ll, ll> mp;

    while (num > 1)
    {
        mp[spf[num]]++;
        num /= spf[num];
    }

    ll red = 1, comp = 1;
    for (auto x : mp)
    {
        if (x.second % k == 0)
        {
            continue;
        }

        for (int i = 1; i <= x.second % k; i++)
        {
            red *= x.first;
        }

        for (int i = 1; i <= k - x.second % k; i++)
        {
            comp *= x.first;
        }
    }
    return make_pair(red, comp);
}

void solve()
{
    ll n, k;
    cin >> n >> k;

    ll arr[n];
    ll ans = 0;
    map<ll, ll> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        auto p = red_comp(arr[i], k);

        ans += mp[p.second];
        mp[p.first]++;
    }
    cout << ans << "\n";
}

main()
{
    cin.tie(0)->sync_with_stdio(0);
    pre();
    int t;
    t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}