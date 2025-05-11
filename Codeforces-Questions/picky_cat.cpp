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
        cin >> vec[i];
    }
    ll req = vec[0];
    sort(vec.begin(), vec.end());
    ll curr_med;
    if (n % 2 == 1)
    {
        curr_med = vec[(n + 1) / 2];
    }
    else
    {
        int m = n / 2;
        curr_med = (vec[m] + vec[m + 1]) / 2;
    }

    if (curr_med < req)
    {
        for (int i = 0; i < (n / 2) + 1; i++)
        {
            
        }
    }
}