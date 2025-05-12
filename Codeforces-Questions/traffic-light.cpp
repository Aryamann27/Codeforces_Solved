#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n;
    char c;
    cin >> n >> c;
    string str;
    cin >> str;

    string dbl = "" + str + str;

    if (c == 'g')
    {
        cout << 0 << '\n';
    }
    else
    {
        ll dist = 0;
        ll pos = 0;
        for (ll i = 2 * n; i >= 0; i--)
        {
            if(dbl[i]=='g')
            {
                pos=i;
            }
            if(dbl[i]==c)
            {
                dist = max(dist, pos-i);
            }
        }
        cout<<dist<<'\n';
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