#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin>>n>>k;
    string s;

    for(int i  = 0; i<k; i++)
    s += i+'a';

    int j = 0;
    for(int i = k; i<n; i++)
    {
        s += s[j]; 
        j++;
    }

    for(int i = 0; i<n; i++)
    cout<<s[i];
    
    return 0;
}