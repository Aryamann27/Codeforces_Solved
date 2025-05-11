#include<bits/stdc++.h>
using namespace std;

main()
{
    int n;
    cin>>n;

    int num_rooms = 0;

    while(n--)
    {
        int a, b;
        cin>>a>>b;
        if(b-a>=2) num_rooms++;
    }
    cout<<num_rooms<<endl;
}