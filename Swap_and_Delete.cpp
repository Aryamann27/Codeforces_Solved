#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    string str;
    cin >> str;

    ll cnt1 = 0, cnt0 = 0;
    for (char &c : str)
    {
        if (c == '0')
            cnt0++;
        else
            cnt1++;
    }

    ll len = 0;

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == '1')
        {
            if (cnt0 == 0)
            {
                break;
            }
            else
            {
                cnt0--;
                len++;
            }
        }
        else if (str[i] == '0')
        {
            if (cnt1 == 0)
            {
                break;
            }
            else
            {
                cnt1--;
                len++;
            }
        }
    }
    cout << str.size() - len << '\n';
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