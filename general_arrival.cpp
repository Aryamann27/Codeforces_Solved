#include<bits/stdc++.h>
using namespace std;

main()
{
    int min_num=INT_MAX, max_num=INT_MIN;
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        max_num = max(max_num, arr[i]);
        min_num = min(min_num, arr[i]);
    }

    int min_ind;

    for(int i=n-1; i>=0; i--)
    {
        if(arr[i]==min_num){
            min_ind=i;
            break;
        }
    }

    int time=0;

    for(int i=min_ind; i<n-1; i++)
    {
        swap(arr[i], arr[i+1]);
        time++;
    }

    for(int i=0; i<n; i++)
    {
        if(arr[i]==max_num){
            break;
        }
        else time++;
    }

    cout<<time<<endl;
}