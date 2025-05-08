// Problem B : Bobritto Bandito

#include<bits/stdc++.h>
using namespace std;

int main()
{ 
     int t;
     cin>>t;

     while(t--)
     {
          int n, m, k;
          cin>>n>>m>>k;

          int arr[n][m]={{0}};

          for(int i=0; i<n; i++)
          {
               for(int j=0; j<m; j++)
               {
                    if((i+j+1)<=k)
                    {
                         arr[i][j]=(i+j+1);
                    }
                    else
                    {
                         arr[i][j] = arr[i][j-2];
                    }
               }
          }
          cout<<"Output is: "<<endl;
          for(int i=0; i<n; i++)
          {
               for(int j=0; j<m; j++)
               {
                    cout<<arr[i][j]<<" ";
               }cout<<endl;
          }
     }
     return 0;
}