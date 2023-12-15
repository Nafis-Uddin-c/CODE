#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);

    int count_small = 0, count_capital = 0;

    for(int i = 0; i<s.size(); i++)
    {
        if(s[i] >= 'a' && s[i] <= 'z') count_small++;
        else count_capital++;
    }
    if(count_small >= count_capital)
    {
        for(int i = 0; i<s.size(); i++)
        {
            if(s[i] >= 'A' && s[i] <= 'Z')
            s[i] += 'a' - 'A';
        }
    }
    else 
    {
        for(int i = 0; i<s.size(); i++)
        {
            if(s[i] >= 'a' && s[i] <= 'z')
            s[i] += 'A' - 'a';
        }
    }
    cout<<s;
    return 0;
}