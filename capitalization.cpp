#include<bits/stdc++.h>
using namespace std;

main()
{
    string s;
    cin>>s;

    int n = int(s[0]);
    if(n>=97) s[0] = char(s[0]-32);
    cout<<s<<endl;
}