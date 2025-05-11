#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll a, b, x, y, n;
    cin >> a >> b >> x >> y >> n;

    ll ans = 1e18;
    ll flag = 2;
    while (flag--)
    {
        ll a_dash = min(n, a - x);
        ll b_dash = min(n - a_dash, b - y);

        ans = min(ans, (a-a_dash)*(b-b_dash));
        swap(a, b);
        swap(x, y);
    }
    cout<<ans<<'\n';
}

int main()
{
    ll T;
    cin >> T;
    // T = 1;
    while (T--)
    {
        solve();
    }
}