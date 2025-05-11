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

    for (int i = 1; i < n - 1; i++)
    {
        ll a = vec[i - 1], b = vec[i] / 2, c = vec[i + 1];
        ll lim_fact = min({a, b, c});
        vec[i-1] -= lim_fact*1;
        vec[i] -= lim_fact*2;
        vec[i+1] -= lim_fact*1;
    }
    ll sum = accumulate(vec.begin(), vec.end(), 0LL);
    if (sum == 0)
    {
        cout << "YES\n";
    }
    else
        cout << "NO\n";
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