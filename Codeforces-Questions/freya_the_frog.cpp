#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;

void solve()
{
    ll x, y, k;
    cin >> x >> y >> k;

    cout << max(2 * ((x + k - 1) / k) - 1, 2 * ((y + k - 1) / k))<<'\n';
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