#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n;
    cin >> n;

    ll block = 5;
    while (n > block)
    {
        n -= block;
        block = block * 2;
    }

    ll per_seq = block / 5;
    ll idx = (n - 1) / per_seq;

    const vector<string> names = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};

    cout << names[idx] << '\n';
}

int main()
{
    ll T;
    // cin >> T;
    T = 1;
    while (T--)
    {
        solve();
    }
}