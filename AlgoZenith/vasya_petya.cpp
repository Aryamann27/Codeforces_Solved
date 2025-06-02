#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
vector<ll> spf(100001);

bool isPrime(ll x)
{
    for (ll i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
        {
            return false;
        }
    }
    return true;
}

void solve()
{
    ll n;
    cin >> n;
    vector<ll> ans;

    for (int i = 2; i <= n; i++)
    {
        if (isPrime(i))
        {
            ans.push_back(i);
            ll temp = i * i;
            while (temp <= n)
            {
                ans.push_back(temp);
                temp *= i;
            }
        }
    }

    cout<<ans.size()<<"\n";
    for (int x : ans)
    {
        cout<<x<<" ";
    }cout<<"\n";
}

main()
{
    solve();
}