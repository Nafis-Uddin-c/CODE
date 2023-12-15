#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int count = 1;
    string next;
    for(int i = 0; i<n; i++)
    {
        string first;
        cin>>first;

        if(i==0) next = first;
        else
        {
            if(next != first) 
            {
                count++;
                next = first;
            }
        }        
    }
 
    cout<<count;
    return 0;
}