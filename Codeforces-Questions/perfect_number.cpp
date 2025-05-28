#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;

void solve()
{
    ll k;
    cin >> k;

    ll ans;

    vector<ll> vec;
    for (int i = 1; i <=11000000; i++)
    {
        ll temp=i;
        ll sum=0;
        while(temp>0)
        {
            sum+=temp%10;
            temp/=10;
        }
        if(sum==10)
        {
            vec.push_back(i);
        }
    }
    // cout<<vec.size()<<endl;
    cout<<vec[k-1]<<'\n';
}

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t;
    // cin >> t;
    t = 1;
    while (t--)
    {
        solve();
    }
}