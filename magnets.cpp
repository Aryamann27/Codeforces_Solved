#include<bits/stdc++.h>
using namespace std;

main()
{
    int n;
    cin>>n;

    int num=n;

    int grps=1;
    string str1, str2;

    cin>>str1;
    n=n-1;

    while(n!=0)
    {
        cin>>str2;
        n--;
        if(str1!=str2)
        {
            grps++;
        }

        if(n==0) break;
        cin>>str1;
        n--;
    }
    if(num==1) cout<<grps<<endl;
    else cout<<grps+1<<endl;
}