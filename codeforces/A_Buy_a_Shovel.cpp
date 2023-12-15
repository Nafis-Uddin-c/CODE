#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k, n, count = 1;
    cin>>k>>n;

    int ans = k*count; 
    // warning     
    // store your multiplication to ans variable to compare it
    while(((ans%10) != n) && ans%10 != 0)
    {
        count++;
        ans = k * count;
    }

    cout<<count;
    
    return 0;
}

