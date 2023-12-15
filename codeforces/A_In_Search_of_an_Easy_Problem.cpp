#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    bool flag = true;
    for(int i = 0; i<n; i++)
    {
        int s;
        cin>>s;
        if(s == 1) flag = false;
    }
    (flag == false)? cout<<"HARD" : cout<<"EASY";
    return 0;
}