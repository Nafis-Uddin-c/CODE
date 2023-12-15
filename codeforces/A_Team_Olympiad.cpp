#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int one[n];
    int two[n];
    int three[n];
    
    int count_one = 0, count_two = 0, count_three = 0;
    for(int i = 0; i<n; i++)
    {
        cin>>a[i];
        
        if(a[i] == 1) 
        {
            one[count_one] = i;
            count_one++;
        }
        else if(a[i] == 2) 
        {
            two[count_two] = i;
            count_two++;
        }
        else 
        {
            three[count_three] = i;
            count_three++;
        }
    }

    int minimum = min(min(count_one, count_two),count_three);
    cout<<minimum<<endl;

    for(int i = 0; i<minimum; i++)
    {
        cout<<one[i]+1 <<" "<< two[i]+1 <<" "<<three[i]+1 <<endl;
    }
    
    return 0;
}