#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;

bool isPrime(ll n)
{
    for (ll i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

void solve()
{
    ll n;
    cin >> n;

    if (isPrime(n))
    {
        cout << "1\n";
        cout << n << "\n";
    }
    else if (isPrime(n - 2))
    {
        cout << "2\n";
        cout << "2 " << n - 2 << "\n";
    }
    else
    {
        cout << "3\n";
        for (int i = 2; i < n - 3; i++)
        {
            if(isPrime(i) && isPrime(n-3-i))
            {
                cout<<"3 "<<i<<" "<<n-3-i<<"\n";
                break;
            }
        }
    }
}

main()
{
    int t;
    // cin>>t;
    t = 1;
    while (t--)
    {
        solve();
    }
}