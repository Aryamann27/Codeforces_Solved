#include<bits/stdc++.h>
using namespace std;

main()
{
    string s, t;
    cin>>s;
    cin>>t;

    string rev="";
    int l = s.length();

    for(int i=l-1; i>=0; i--)
    {
        rev+=s[i];
    }

    if(rev==t){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
}