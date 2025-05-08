#include<bits/stdc++.h>
using namespace std;

main()
{ 
    int t;

    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        
        int flag=0;

        if(n%2!=0)
        {
            cout<<"YES"<<endl;
        }
        else {
            flag=0;
            while(n!=1)
            {
                n=n/2;
                if(n%2!=0 && n>1)
                {
                    flag++;
                    break;
                }
            }
            if(flag>0) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    
}