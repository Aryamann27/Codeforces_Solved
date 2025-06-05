#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        cnt += a[i] < 0 ? 1 : 0;
    }

    ll sum = accumulate(a.begin(), a.end(), 0);

    if (sum >= 0 && cnt % 2 == 0)
    {
        cout << "0\n";
    }
    else
    {
        ll res = 0;
        while (sum < 0)
        {
            cnt--;
            sum += 2;
            res++;
        }

        if (cnt & 1)
        {
            sum+=2;
            res++;
        }

        cout<<res<<"\n";
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