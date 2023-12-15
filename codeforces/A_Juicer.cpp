#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, a, b, sum = 0, count = 0;
    cin>>n>>a>>b;

    long long int x[n];
    for(int i=0; i<n; i++)
    {
        cin>>x[i];
        if(x[i] <= a)
        {
            sum+= x[i];
        }
        if(sum > b)
        {
            count++;
            sum = 0;
        }
    }
    cout<<count;
    
    return 0;
}