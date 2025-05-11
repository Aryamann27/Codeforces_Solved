#include<bits/stdc++.h>
using namespace std;

main()
{
    int n;
    cin>>n;
    string str;
    cin>>str;

    set<char> alph;

    if(n<26){
        cout<<"NO"<<endl;
    }
    else{
        for(int i=0; i<n; i++)
        {
            alph.insert(tolower(str[i]));
        }
        if(alph.size()==26){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
}   
