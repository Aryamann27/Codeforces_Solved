#include <bits/stdc++.h>
using namespace std;

// Builds the suffix array for string s in O(n log n) time
// Returns vector SA of length n, where SA[i] is the starting index
// of the i-th lexicographically smallest suffix of s.
vector<int> build_suffix_array(const string &s)
{
    string str = s + "$";
    int n = str.size();
    
    vector<int> sa(n), classes(n);

    // k = 0: sort by single character
    {
        vector<pair<char, int>> a(n);

        for (int i = 0; i < n; i++)
            a[i] = {str[i], i};

        sort(a.begin(), a.end());

        for (int i = 0; i < n; i++)
            sa[i] = a[i].second;

        classes[sa[0]] = 0;

        for (int i = 1; i < n; i++)
        {
            if (a[i].first == a[i - 1].first)
                classes[sa[i]] = classes[sa[i - 1]];
            else
                classes[sa[i]] = classes[sa[i - 1]] + 1;
        }
    }

    vector<int> sa_tmp(n), cls_tmp(n);
    int k = 0;
    while ((1 << k) < n)
    {
        // shift positions back by 2^k
        for (int i = 0; i < n; i++)
        {
            sa_tmp[i] = sa[i] - (1 << k);
            if (sa_tmp[i] < 0)
                sa_tmp[i] += n;
        }
        // counting sort by classes
        int num_classes = classes[sa[n - 1]] + 1;
        vector<int> cnt(num_classes);
        for (int x : sa_tmp)
            cnt[classes[x]]++;
        for (int i = 1; i < num_classes; i++)
            cnt[i] += cnt[i - 1];
        for (int i = n - 1; i >= 0; i--)
        {
            int cl = classes[sa_tmp[i]];
            cnt[cl]--;
            sa[cnt[cl]] = sa_tmp[i];
        }
        // recompute classes
        cls_tmp[sa[0]] = 0;
        for (int i = 1; i < n; i++)
        {
            pair<int, int> cur = {classes[sa[i]],
                                  classes[(sa[i] + (1 << k)) % n]};
            pair<int, int> prev = {classes[sa[i - 1]],
                                   classes[(sa[i - 1] + (1 << k)) % n]};
            if (cur == prev)
                cls_tmp[sa[i]] = cls_tmp[sa[i - 1]];
            else
                cls_tmp[sa[i]] = cls_tmp[sa[i - 1]] + 1;
        }
        classes.swap(cls_tmp);
        k++;
    }
    // drop the added '$' suffix at position 0 if desired
    // sa.erase(sa.begin());
    return sa;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    vector<int> sa = build_suffix_array(s);
    // print suffix array (including the empty suffix at index n)
    for (int idx : sa)
    {
        cout << idx << ' ';
    }
    cout << '\n';
    return 0;
}
