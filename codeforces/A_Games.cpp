#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, count = 0;
    cin>>n;
    int x[n], y[n]; 

    for(int i = 0; i<n; i++)
    {
       cin>>x[i]>>y[i];
    }

    for(int i = 0; i<n-1; i++)
    {
       for(int j = i+1; j<n; j++)
       {
            if(x[i] == y[j]) count++;
            if(y[i] == x[j]) count++;     // warn use if not else if
       }
    }
    
    cout<<count;








    
    return 0;
}