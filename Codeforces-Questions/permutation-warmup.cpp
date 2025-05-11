#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n;
    cin >> n;

    ll sum = 0;
    ll flag = n;
    for (int i = 1; i <= n; i++)
    {
        sum += abs(flag - i);
        flag--;
    }

    cout << sum / 2 + 1 << '\n';
}

int main()
{
    ll T;
    cin >> T;

    while (T--)
    {
        solve();
    }
}