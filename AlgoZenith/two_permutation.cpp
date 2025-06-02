#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;

void solve()
{
    ll n, a, b;
    cin >> n >> a >> b;

    if (n==a && a==b && n==b)
    {
        cout << "YES\n";
    }
    else
    {
        if (n - a - b >= 2)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}

main()
{
    cin.tie(0)->sync_with_stdio(0);
    
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}