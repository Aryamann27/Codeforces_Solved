#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    ll l, r, flag1 = 0, flag2 = 0;
    for (int i = 1; i < n - 1; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (a[j] < a[i])
            {
                flag1 = 1;
                l = j;
                break;
            }
        }
        if (flag1)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (a[j] < a[i])
                {
                    flag2 = 1;
                    r = j;
                    break;
                }
                else
                    continue;
            }
            if (flag2)
            {
                cout << "YES\n";
                cout << l+1 << " " << i+1 << " " << r+1 << "\n";
                return;
            }
        }
        else
        {
            continue;
        }
    }
    cout << "NO\n";
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