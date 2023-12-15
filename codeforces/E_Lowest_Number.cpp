#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int min_value = INT_MAX, min_pos;
    for(int i = 0; i<n; i++)
    {
        cin>>a[i];
        if(min_value > a[i])
        {
            min_value = a[i];
            min_pos = i;
        }
    }

    cout<<min_value<<" "<<min_pos+1;
    
    return 0;
}