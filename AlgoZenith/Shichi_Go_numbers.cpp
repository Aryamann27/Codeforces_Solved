#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
vector<ll> spf(100001);

void pre()
{
    spf[0] = spf[1] = 1;
    for (int i = 2; i <= 100000; i++)
        spf[i] = i;
    for (int i = 2; i <= 100000; i++)
    {
        if (spf[i] == i)
        {
            for (int j = 2 * i; j <= 100000; j += i)
            {
                if (spf[j] == j)
                    spf[j] = i;
            }
        }
    }
}

void solve()
{
    ll n;
    cin >> n;
    ll temp = n;
    for (ll i = n - 1; i >= 1; i--)
    {
        n *= i;
    }

    vector<ll> fact;
    for (ll i = temp*temp; i <= n; i++)
    {
        if (n % i == 0)
        {
            fact.push_back(i);
        }
    }

    ll res = 0;
    for (ll i = 0; i < fact.size(); i++)
    {
        ll cnt = 0;
        for (ll j = 1; j <= fact[i]; j++)
        {
            if (fact[i] % j == 0)
            {
                cnt++;
            }
        }
        if (cnt == 75)
        {
            res++;
        }
    }
    cout << res << "\n";
}

main()
{
    solve();
}