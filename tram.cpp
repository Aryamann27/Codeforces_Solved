#include<bits/stdc++.h>
using namespace std;

main()
{
    int n;
    cin>>n;
    int a;
    int b;

    int curr_cap=0;
    int min_cap = INT_MIN;

    for(int i=0; i<n; i++)
    {
        cin>>a>>b;
        curr_cap=(curr_cap - a + b);
        if(curr_cap>min_cap)
        {
            min_cap=curr_cap;
        }
    }
    cout<<min_cap<<endl;
}