#include <bits/stdc++.h>
using namespace std;
#define int long long

void pre()
{
    int n;
    cin >> n;
    vector<bool> is_prime(n + 1, true);
    is_prime[0] = is_prime[1] = false;

    for (int i = 2; i <= n; i++)
    {
        if (is_prime)
        {
            for (int j = i * i; j <= n; j += i)
            {
                is_prime[j] = false;
            }
        }
    }
}

main()
{
    int t;
    t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}