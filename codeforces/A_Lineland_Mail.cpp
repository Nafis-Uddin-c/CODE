#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, mi_n, ma_x;
    cin>>n;

    int a[n];
    for(int i = 0; i<n; i++)
    cin>>a[i];


    for(int i = 0; i<n; i++)
    {
        if(i == 0)           mi_n = a[1] - a[0];
        else if(i == n-1)    mi_n = a[i] - a[i-1];
        else                 mi_n = min( a[i] - a[i-1] , a[i + 1] - a[i] );

        ma_x = max(a[n-1]-a[i] , a[i]-a[0]);

        cout<<mi_n<<" "<<ma_x<<endl;
    }
    
    return 0;
}

