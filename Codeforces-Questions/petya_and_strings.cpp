#include<bits/stdc++.h>   
using namespace std;

main()
{
    string s1, s2;
    cin>>s1>>s2;

    for (char &c : s1) {
        c = tolower(c);
    }

    for (char &c : s2) {
        c = tolower(c);
    }

    int flag=0;
    for(int i=0; i<s1.length(); i++)
    {
        if(s1[i]==s2[i]){
            flag+=1;
            continue;
        }
        else if(s1[i]>s2[i]){
            cout<<1<<endl;
            break;
        }
        else if(s1[i]<s2[i]){
            cout<<-1<<endl;
            break;
        }
    }

    if(flag==s1.length())
    {
        cout<<0<<endl;
    }
}