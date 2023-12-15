#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, h, total = 0;
    cin>>n>>h;

    for(int i = 0; i<n; i++)
    {
        int height;
        cin>>height;

        if(height > h) total++;
    }
    total += n;
    cout<<total;
    return 0;
}