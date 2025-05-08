#include<bits/stdc++.h>
using namespace std;

main()
{
    long long int n;
    cin>>n;

    int arr[2] = {0};

    int x=0;
    /* cout<<x<<" "; */
    while(n!=0)
    {
        x = n%10;
        if(x==4)
        {
            arr[0]+=1;
        }
        else if(x==7)
        {
            arr[1]+=1;
        }
        n=n/10;
    }

    /* cout<<endl;
    cout<<arr[0]<<" "<<arr[1]<<endl; */

    if((arr[0]+arr[1])==4 || (arr[0]+arr[1])==7)
    {
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
}