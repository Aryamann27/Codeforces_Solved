#include<bits/stdc++.h>
using namespace std;

main()
{
    int k, r;
    cin>>k>>r;
    

    if(k%10==0) cout<<1<<endl;
    else
    {
        int ans=1;
        int num = k%10;
        while(num!=r)
        {
            ans++;
            num=k*ans;
            num=num%10;
            if(num==0) break;
        }
        cout<<ans<<endl;
    }
}