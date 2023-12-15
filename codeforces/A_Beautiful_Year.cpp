#include <bits/stdc++.h>
using namespace std;
int main()
{
    int year;
    cin>>year;
    string s;
    bool flag=true;
    do
    {
        year++;     // warn = increase increment
        s = to_string(year);
        flag = true;
        for(int i = 0; i<3; i++)
        {
            for(int j = i+1; j<4; j++)
            {
                if(s[i] == s[j]) 
                {
                    flag = false;
                } 
            }
        }   

    } while (flag == false); 

    cout<<year;
    
    return 0;
}