#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 4, count = 0;
    bool flag;
    int a[n];

    for(int i = 0; i<n; i++)
    {
        cin>>a[i];      //check whether you took input 
    }

    for(int i = 0; i<n-1; i++)
    {
        flag = false;
        for(int j = i+1; j<n; j++)
        {
            if(a[i] == a[j])
            {
                count++;
                flag = true;
            }

            if(flag == true)   
            //   to skip the index in the a[i] == a[j]  condition
            break;
        }
    }
    cout<<count;
    return 0;
}

