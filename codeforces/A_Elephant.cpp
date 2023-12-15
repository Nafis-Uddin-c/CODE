#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;

    long long int ans;
    if(n<=5) ans = 1;
    else 
    {
        if(n%5 == 0) ans = n/5;
        else ans = n/5 + 1;
    }
    
    cout<<ans;
    return 0;
}