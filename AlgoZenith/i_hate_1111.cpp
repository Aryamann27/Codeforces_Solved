#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;

void solve()
{
    ll x;
    cin >> x;

    if (x > 1099)
    {
        cout << "YES\n";
    }
    else
    {
        while (x >= 0)
        {
            if (x % 11 == 0)
            {
                cout << "YES\n";
                return;
            }
            else
            {
                x -= 111;
            }
        }
        cout << "NO\n";
    }
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