#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int a[n];
    for(int i = 0; i<n; i++)
    {
        cin>>a[i];
    }

    int index = 0;

    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            if(a[j] == (i+1))
            {
                index = j+1;
            }
        }
        cout<<index<<" ";
    }
    
    return 0;
}