#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int c, d, n, amount = 0;
    cin>>c>>d>>n;

    for(int i = 0; i<n; i++)
    amount += c*(i+1);

    long long int need = amount - d;

    (need < 0)? cout<<0 : cout<<need;
    return 0;
}