#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    
    int count = 0;
    int a[26] = {0};  // don't take here       char a[26] = {0} 

    for(int i = 0; i<s.size(); i++)
    {
        if(s[i] >= 'a' && s[i] <= 'z')
        a[s[i] - 'a'] ++; 
    }

    for(int i = 0; i<26; i++)
    if(a[i] > 0) count++;

    cout<<count;
    
    return 0;
}


