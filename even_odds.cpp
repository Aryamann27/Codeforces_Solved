#include<bits/stdc++.h>
using namespace std;


main()
{
    long long int n, k;
    cin>>n>>k;

    long long int ans=0;

    if(k<=(n+1)/2)
    {
        ans=k*2-1;
    }
    else if(k>(n+1)/2)
    {
        ans = 2*(k - (n+1)/2);
    }
    cout<<ans<<endl;
}