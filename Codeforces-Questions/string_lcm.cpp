#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    string s, t;
    cin >> s >> t;

    ll n = s.size(), m = t.size();

    ll lcm = n * m / (__gcd(n, m));

    string res1 = "", res2 = "";
    ll n_dash = lcm / n, m_dash = lcm / m;
    while (n_dash--)
    {
        res1 += s;
    }

    while (m_dash--)
    {
        res2 += t;
    }

    if (res1 == res2)
    {
        cout << res1 << "\n";
    }
    else
    {
        cout << -1 << '\n';
    }
}

int main()
{
    ll T;
    cin >> T;

    while (T--)
    {
        solve();
    }
}