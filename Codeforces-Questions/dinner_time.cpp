#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n, m, p, q;
    cin >> n >> m >> p >> q;

    if (n % p == 0)
    {
        if (m == (n / p) * q)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    else
    {
        cout << "YES\n";
    }
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