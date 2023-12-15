#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    
    int sum_sereja = 0;
    int sum_dima = 0;

    int a[n];
    for(int i = 0; i<n; i++)
    {
        cin>>a[i];
    }

    int tmp = 0;
    for(int i = 0, j = n-1; i<=j;)
    {
        if(tmp %2 == 0)
        {
            if(a[i] <= a[j])
            {
                sum_sereja += a[j];
                j--;  
 // when a[...j...] >  then take from right and come towards the left
            }
            else 
            {
                sum_sereja += a[i];
                i++;
// when a[..i..] >  then take from left and come towards the right
            }

        }
        else
        {
            if(a[i] <= a[j])
            {
                sum_dima += a[j];
                j--;
            }
            else 
            {
                sum_dima += a[i];
                i++;
            }

        }
        tmp++;
    }

    cout<<sum_sereja<<" "<<sum_dima;
    
    return 0;
}