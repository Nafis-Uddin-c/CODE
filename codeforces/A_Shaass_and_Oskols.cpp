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

    int m;
    cin>>m;
    int x[m], y[m];

    for(int i = 0; i<m; i++)
    {
        cin>>x[i]>>y[i];
    }

    for(int i = 0; i<m; i++)
    {
        if((x[i]-1 <n) && (x[i]-1 >=0))
        a[x[i]] += (a[x[i]-1] - y[i]);

        if((x[i]-2 >=0) && (x[i]-2 <n))
        a[x[i]-2] += (y[i] -1);

        a[x[i]-1] = 0;

    }
    
    for(int i = 0; i<n; i++)
    {
        cout<<a[i]<<endl;
    }
    
    return 0;
}