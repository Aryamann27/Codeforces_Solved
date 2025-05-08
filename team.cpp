#include<bits/stdc++.h>
using namespace std;

main()
{
    int n;
    cin>>n;
    vector<int> arr;
    int arr2[3] = {0};
    while(n--)
    {
        cin>>arr2[0]>>arr2[1]>>arr2[2];

        if((arr2[0]+arr2[1]+arr2[2])>=2) arr.push_back(1);
    }
    cout<<arr.size()<<endl;
}