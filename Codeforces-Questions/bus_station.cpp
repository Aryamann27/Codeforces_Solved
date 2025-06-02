#include <bits/stdc++.h>
using namespace std;
#define int long long
vector<int> is_prime(1000001, 1);

void solve()
{
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }

    int sum = accumulate(vec.begin(), vec.end());
    vector<int> div;
    for (int i = 1; i*i <= sum; i++)
    {
        if (sum % i == 0)
            div.push_back(i);
    }

    for(int i=0; i<div.size(); i++)
    {
        for(int j=0; j<n; j++)
        {

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