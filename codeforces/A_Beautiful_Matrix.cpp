#include <bits/stdc++.h>
using namespace std;
int main()
{
    int row, col;
    int count = 0;
    int a[5][5];
    
    for(int i = 0; i<5; i++)
    {
        for(int j = 0; j<5; j++)
        {
            cin>>a[i][j];

            if(a[i][j] == 1) 
            {
                row = i;
                col = j;
            }
        }
    }

    count = abs(2-col) + abs(2-row);
    cout<<count;
    
    return 0;
}