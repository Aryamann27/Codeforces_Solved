#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    string str;
    cin >> str;

    str += "$";

    int n = str.size();
    vector<int> p(n), c(n); // p contains the order of the string and c contains the equivalence classes.
    {
        vector<pair<char, int>> a(n);
        for (int i = 0; i < n; i++)
        {
            a[i] = {str[i], i};
        }
        sort(a.begin(), a.end());
        for (int i = 0; i < n; i++)
        {
            p[i] = a[i].second;
        }

        c[p[0]] = 0;
        for (int i = 1; i < n; i++)
        {
            if (a[i].first == a[i - 1].first)
            {
                c[p[i]] = c[p[i - 1]];
            }
            else
            {
                c[p[i]] = c[p[i - 1]] + 1;
            }
        }
    }

    int k = 0;
    while ((1 << k) < n)
    {
        // k -> k + 1
        vector<pair<pair<int, int>, int>> a(n);
        for (int i = 0; i < n; i++)
        {
            a[i] = {{c[i], c[(i + (1 << k)) % n]}, i};
        }
        sort(a.begin(), a.end());

        for (int i = 0; i < n; i++)
        {
            p[i] = a[i].second;
        }
        c[p[0]] = 0;
        for (int i = 1; i < n; i++)
        {
            if (a[i].first == a[i - 1].first)
            {
                c[p[i]] = c[p[i - 1]];
            }
            else
            {
                c[p[i]] = c[p[i - 1]] + 1;
            }
        }
        k += 1;
    }

    for (int i = 0; i < n; i++)
    {
        // cout << p[i] << " " << str.substr(p[i], n - p[i]) << '\n';
        cout << p[i] << " ";
    }
    // cout << '\n';
}

int main()
{
    solve();
}