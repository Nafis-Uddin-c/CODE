#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int a[n];
    int police = 0;
    int untreated = 0;
    for(int i = 0; i<n; i++)
    {
        cin>>a[i];
        if(a[i] > 0)
            police += a[i];

        else if(a[i] == -1)
        {
            if(police <= 0)
                untreated++;
            else
            police--;
        }
    }
    cout<<untreated;
    
    return 0;
}