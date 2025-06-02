#include <bits/stdc++.h>
using namespace std;
#define int long long
vector<int> is_prime(1000001, 1);

void pre()
{
    is_prime[0] = is_prime[1] = 0;

    for (int i = 2; i * i < 1000001; i++)
    {
        if (is_prime[i])
        {
            for (int j = i * i; j < 1000001; j += i)
            {
                is_prime[j] = 0;
            }
        }
    }
}

void solve()
{
    int n;
    cin >> n;
    for (int i = 4; i < n; i++)
    {
        if (!is_prime[i] && !is_prime[n - i])
        {
            cout << i << " " << n - i << "\n";
            break;
        }
    }
}

main()
{
    int t;
    t = 1;
    pre();
    // cin >> t;
    while (t--)
    {
        solve();
    }
}