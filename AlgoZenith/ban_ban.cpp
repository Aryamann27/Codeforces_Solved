#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;

void solve()
{
    ll n;
    cin >> n;

    if (n == 1)
    {
        cout << 1 << "\n";
        cout << 1 << " " << 3 << '\n';
    }
    else
    {
        if (!(n & 1))
        {
            cout << n / 2 << "\n";
            int ans = n / 2;
            int i = 1, j = n * 3;
            ;
            while (ans--)
            {
                cout << i << " " << j << '\n';
                i += 3;
                j -= 3;
            }
        }
        else
        {
            int ans = n / 2 + 1;
            cout << ans << "\n";
            int i = 1, j = n * 3;
            while (ans--)
            {
                cout << i << " " << j << "\n";
                i += 3;
                j -= 3;
            }
        }
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