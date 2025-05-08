#include<bits/stdc++.h>
using namespace std;

main()
{
    string s;
    cin>>s;
    vector<int> arr;
    for(char &c : s)
    {
        if(c!='+')
        {
            arr.push_back(c-48);
        }
    }

    sort(arr.begin(), arr.end());

    int i=0;
    for(char &c : s)
    {
        if(c!='+')
        {
            c = char(arr[i++]+48);
        }
    }
    cout<<s<<endl;
}