#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;

    char initial = 'a';
    int sum = 0;
    for(int i = 0; i<s.size(); i++)
    {
        if(abs(s[i] - initial) >= 13)
        // to get distance use abs() even in the condition
        {
            sum += 26 - abs((s[i] - initial));
        }
        else 
        {
            sum += abs(s[i] - initial);
        }
        initial = s[i];
    }
    cout<<sum;
    
    return 0;
}