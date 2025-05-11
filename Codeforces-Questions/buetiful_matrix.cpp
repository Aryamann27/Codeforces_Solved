#include<bits/stdc++.h>
using namespace std;

main()
{
    int m[5][5];

    int x, y;

    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            cin>>m[i][j];
            if(m[i][j]==1)
            {
                x=i+1;
                y=j+1;
            }
        }
    }

    int res = abs(x-3) + abs(y-3);
    cout<<res<<endl;
}