#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a, b;
    cin>>a>>b;
    bool flag = true;

    for(int i = 0, j = b.size() -1; i<a.size(); i++, j--)
    if(b[j] != a[i]) flag = false;

    (flag == true)? cout<<"YES" : cout<<"NO";
    
    return 0;
}