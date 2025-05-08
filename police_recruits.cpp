#include<bits/stdc++.h>
using namespace std;

main()
{
    int n; 
    cin>>n;
    int crimes=0, rec=0;
    int unsolved=0;

    int last_ind;

    for(int i=0; i<=n; i++)
    {
        if(i==n)
        {
            if(last_ind==-1)
            {
                unsolved = abs(crimes - rec);
                break;
            }
            else break;
        }

        if(crimes-rec<0)
        unsolved = abs(crimes - rec);
        int a;
        cin>>a;
        if(i==n-1) last_ind=a;

        cout<<"iteration - "<<i<<endl;
        cout<<"unsolved - "<<unsolved<<endl;

        if(a==-1) crimes++;
        else if(a>0) rec+=a;

        cout<<"crimes - "<<crimes<<endl;
        cout<<"recruits - "<<rec<<endl;
        cout<<endl;
    }
    cout<<unsolved<<endl;
}