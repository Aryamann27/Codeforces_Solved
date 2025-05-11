#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<pair<int, int>> vec;

    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        pair<int, int> p;
        vec.push_back(p);
    }

    bool flag = true;
    for (int i = 0; i < n - 1; i++)
    {
        int j = i + 1;
        if ((vec[i].first > vec[i + 1].first && vec[i].second < vec[i + 1].second) || vec[i].first < vec[i + 1].first && vec[i].second > vec[i + 1].second)
        {
            flag = true;
            cout << "Alex Happy" << endl;
            break;
        }
        else
        {
            i++;
            flag=false;
            continue;
        }
    }
    
    if(flag==false) cout<<"Poor Alex"<<endl;
}

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int t;
    t = 1;
    // cin >> t;

    while (t--)
    {
        solve();
    }
    return 0;
}