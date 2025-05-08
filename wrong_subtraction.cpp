#include<bits/stdc++.h>
using namespace std;

main()
{
    int n, k;
    cin>>n>>k;

    while(k!=0)
    {
        if(n%10!=0)
        {
            n = n-1;
            k--;
        }
        else if(n%10==0)
        {
            n=n/10;
            k--;
        }
    }
    cout<<n<<endl;
}