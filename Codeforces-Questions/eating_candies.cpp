#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> vec(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }

    int i = 0, j = n - 1;
    ll a = vec[i], b = vec[j];

    ll ans = 0;

    while (i < j)
    {
        if (a == b)
        {
            ans = max(ans, i + 1 + n - j);
        }   

        if (a <= b)
        {
            i++;
            a += vec[i];
        }
        if (a > b)
        {
            j--;
            b += vec[j];
        }
    }
    cout << ans << '\n';
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