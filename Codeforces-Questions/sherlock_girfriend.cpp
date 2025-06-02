#include <bits/stdc++.h>
using namespace std;
bool a[100001];
int main()
{
    int n;
    cin >> n;

    for (int i = 2; i <= n + 1; i++)
    {
        if (a[i] == 0)
            for (int j = 2; j <= (n + 1) / i; j++)
            {
                a[i * j] = 1;
            }
    }
    if (n >= 3)
    {
        cout << 2 << endl;
    }
    else
        cout << 1 << endl;
    for (int i = 2; i <= n + 1; i++)
        cout << a[i] + 1 << ' ';
    return 0;
}