#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    cin.ignore();
    int count = 0;

    string s;
    getline(cin, s);
    
    for(int i = 0; i<n; i++)
    {
        if(s[i] == s[i+1]) count++;
    }
    
    cout<<count;
    return 0;
}