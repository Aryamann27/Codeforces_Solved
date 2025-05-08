#include<bits/stdc++.h>
using namespace std;

main()
{
    int n;
    string s;
    cin>>n;
    cin>>s;

    int ans=0;
    for(int i=0; i<n-1; i++)
    {
        if(s[i]==s[i+1])
        {
            ans++;
        }
    }
    cout<<ans<<endl;
}
