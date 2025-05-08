#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n;
    cin >> n;
    vector<ll> vec(n);

    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }

    ll k1 = 0LL, k2 = 0LL;
    while (k1 < n && vec[k1] == vec[0])
    {
        k1 += 1;
    }

    while ((k2 < n) && (vec[n - k2 - 1] == vec[n - 1]))
    {
        k2++;
    }

    ll res = n;
    if (vec[0] == vec[n - 1])
    {
        res = res - (k1 + k2);
    }
    else
    {
        res = res - max(k1, k2);
    }
    cout<<max(res, 0LL)<<'\n';
}

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int t;
    cin >> t;
    // t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}