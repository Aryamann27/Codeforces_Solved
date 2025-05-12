#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n;
    cin >> n;

    vector<ll> vec(n);

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        vec[i] = abs(x);
    }

    ll req = vec[0];
    sort(vec.begin(), vec.end());

    if (n & 1)
    {
        if (vec[n / 2] >= req)
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
        if (vec[n / 2] >= req || vec[n / 2 - 1] >= req)
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
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
}