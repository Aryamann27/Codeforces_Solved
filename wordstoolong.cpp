#include<bits/stdc++.h>
using namespace std;

main()
{
    int t;
    cin>>t;

    string arr[t] = {};

    int t1=t;
    while(t1--){
        cin>>arr[t1];
    }

    while(t--)
    {
        string s = arr[t];
        int len = s.length();

        if(len>10) cout<<s[0]<<len-2<<s[len-1]<<endl;
        else cout<<s<<endl;
    }
}