#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
vector<ll> spf(100001);

void pre()
{
    spf[0] = spf[1] = 1;
    for (int i = 2; i < 100001; i++)
        spf[i] = i;
    for (int i = 2; i < 100001; i++)
    {
        if (spf[i] == i)
        {
            for (int j = 2 * i; j < 100001; j += i)
            {
                if (spf[j] == j)
                    spf[j] = i;
            }
        }
    }
}

void solve()
{
    ll n, k;
    cin >> n >> k;

    vector<ll> vec;
    ll temp = n;

    while (temp > 1)
    {
        vec.push_back(spf[temp]);
        temp = temp / spf[temp];
    }

    if (vec.size() < k)
    {
        cout << "-1\n";
    }
    else if (vec.size() == k)
    {
        for (int i = 0; i < vec.size(); i++)
        {
            cout << vec[i] << " ";
        }
        cout << "\n";
    }
    else
    {
        while (vec.size() > k)
        {
            ll s = vec.size();
            vec[s - 2] = vec[s - 2] * vec[s - 1];
            vec.pop_back();
        }
        for (int i = 0; i < vec.size(); i++)
        {
            cout << vec[i] << " ";
        }
        cout << "\n";
    }
}

main()
{
    int t;
    // cin>>t;
    t = 1;
    pre();
    while (t--)
    {
        solve();
    }
}