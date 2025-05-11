#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n;
    char c;
    string str;
    cin >> n >> c;
    cin >> str;

    if (c == 'g')
    {
        cout << 0 << '\n';
    }
    else
    {
        string dbl = str + str;

        ll cnt = count(str.begin(), str.begin() + n, c);
        int j = 0;
        vector<ll> vec(cnt, 0);
        vector<ll> res;

        bool flag = false;
        for (int i = 0; i < dbl.size(); i++)
        {
            if (dbl[i] == c && i < n)
            {
                flag = true;
                continue;
            }
            if (flag)
            {
            }
            if (dbl[i] == 'g')
            {
                res.push_back(count);
                count = 0;
                flag = false;
            }
        }
        cout << *max_element(res.begin(), res.end()) << '\n';
    }
}

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int t;
    cin >> t;
    // t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}