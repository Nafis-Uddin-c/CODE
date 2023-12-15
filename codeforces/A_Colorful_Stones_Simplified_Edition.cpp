#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, t;
    cin>>s>>t;
    int i = 0, j = 0, count = 1;

    while(j<t.size())
    {
        if(s[i] == t[j])
        {
            i++;        // if matches forward the first index
            count++;
        }
        j++;        // forward the second index every time
    }
    cout<<count;
    
    return 0;
}