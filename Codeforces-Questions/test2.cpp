#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;

void solve()
{
    string s, t;
    cin >> s >> t;
    int pt = (int)t.size() - 1;

    for (int i = (int)s.size() - 1; i >= 0 && pt >= 0; --i)
    {
        if (s[i] == t[pt])
        {
            pt--;
        }
        else if (s[i] == '?')
        {
            s[i] = t[pt];
            pt--;
        }
    }

    if (pt >= 0)
    {
        cout << "NO\n";
    }
    else
    {
        for (char &c : s)
            if (c == '?')
                c = 'a';

        cout << "YES\n" << s << "\n";
    }
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