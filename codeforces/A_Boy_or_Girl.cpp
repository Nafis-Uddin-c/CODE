#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);

    sort(s.begin(), s.end());
    int count = 1;

    for(int i = 0; i<s.size() - 1; i++)
    {
        if(s[i] != s[i+1]) count++;
    }

    if(count%2 == 0) cout<<"CHAT WITH HER!";
    else cout<<"IGNORE HIM!";
    
    return 0;
}


