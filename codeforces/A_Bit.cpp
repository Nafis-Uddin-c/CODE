#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int ans = 0;
    // for(int i = 0; i<t; i++)
    // {
    //     char ch1, ch2, ch3;
    //     cin>>ch1>>ch2>>ch3;
    //     if(ch1 == '+') ans++;
    //     if(ch1 == '-') ans--;
    //     if(ch1 == 'X') 
    //     {
    //         if(ch2 == '+')
    //         ans ++;
    //         else ans--;
    //     }
        
    // }

    cin.ignore();
    
    for(int i = 0; i<t; i++)
    {
        string s;
        getline(cin, s);
        if(s[0] == '+') ans++;
        else if(s[0] == '-') ans--;
        else
        {
            if(s[1] == '+') ans++;
            else ans--;
        }
    }

    cout<<ans;
    return 0;
}