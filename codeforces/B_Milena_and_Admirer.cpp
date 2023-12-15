#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, count = 0;
    cin>>t;
    for(int i = 0; i<t; i++)
    {
        cin>>n;
        count = 0;
        int a[n] = {0}, b[n] = {0};
        for(int j = 0; j<t; j++)
        {
            cin>>a[j];
            b[j] = a[j];
        }
        sort(a, a+n);
    
        for(int j = 0; j<n; j++)
        {
            cout<<a[j]<<b[j]<<endl;
            if(a[j] != b[j]) 
            {
                count++;
                continue;
            }
        }
        // cout<<count<<endl;
        cout<<endl;
    }
        
    return 0;
}

// wrong 