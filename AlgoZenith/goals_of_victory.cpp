#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n-1);

    for (int i = 0; i < n-1; i++)
    {
        cin >> a[i];
    }

    ll sum = accumulate(a.begin(), a.end(), 0);

    sum = -sum;
    cout<<sum<<"\n";

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