#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin>>n>>k;
    int count = 0;

    for(int i = 0; i<n; i++)
    {
        int s;
        cin>>s;
        int f_score;
        if(i <= k-1)
        {
            if(s>0)
            count++;
        }
        
        if(i == k-1)
        f_score = s;

        if(i >= k)
        {
            if(f_score == 0)
            break;
            if(s == f_score)
            count++;
        }  
    }
    
    /*

    int a[n];
    for(int i = 0; i<n; i++)
    {
        cin>>a[i];
        if(a[i] >= a[k-1] && a[i] > 0)
        count++;
    }
    
    */


    cout<<count;
    return 0;
}