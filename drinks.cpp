#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    float vol=0.0;

    for(int i=0; i<n; i++)
    {
        float p;
        cin>>p;
        vol+=(p/100);
    }
    cout<<float((vol/n)*100)<<endl;
}