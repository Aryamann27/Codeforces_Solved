#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin>>n>>k;
    vector<int> arr;
    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        arr.push_back(a);
    }
    int i=0;
    int flag=0;
    while(arr[i]>=arr[k-1] && arr[i]!=0 && i!=n+1)
    {   
        i++;
        flag++;
    }
    cout<<flag<<endl;
}