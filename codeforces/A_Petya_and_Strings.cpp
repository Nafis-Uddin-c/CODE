#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a, b;
    getline(cin,a);
    getline(cin,b);

    for(int i = 0; i<a.size(); i++)
    {
        if(a[i] >= 'a' && a[i] <= 'z')
        {
            a[i] = a[i] - 'a' + 'A';
        }
    }

    for(int i = 0; i<b.size(); i++)
    {
        if(b[i] >= 'a' && b[i] <= 'z')
        {
            b[i] = b[i] - 'a' + 'A';
        }
    }

    if(a > b)
    cout<<1;
    else if(a<b) cout<<-1;
    else cout<<0;
    
    return 0;
}