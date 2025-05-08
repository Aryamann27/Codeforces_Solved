#include<bits/stdc++.h>
using namespace std;

main()
{
    string s;
    cin>>s;
    
   set<char> arr;

    for(char &c : s){
        arr.insert(c);
    }

    if(arr.size()%2==0){
        cout<<"CHAT WITH HER!";
    }
    else{
        cout<<"IGNORE HIM!";
    }
}