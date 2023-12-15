#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    long long int x, d, child = 0;

    char ch;
    cin>>n>>x;

    for(int i = 0; i<n; i++)
    {
        cin>>ch>>d;

        if(ch == '+')
        {
            x += d;
        }
        
        else
        {
            if(x<d)
            {
                child++;
            }
            else x -= d;
        }
    }
    cout<<x<<" "<<child;
}