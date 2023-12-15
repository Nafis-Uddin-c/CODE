#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, k;
    string s;
    cin>>t;
    int count = 0;
    for(int i = 0; i<t; i++)
    {
        cin>>n>>k;
        cin>>s;
        count = 0;
        for(int j = 0; j<n; j++)
        { 
            if(s[j] == 'B')  count++;
        }

        if(count > k) cout<<1<<endl<<abs(count - k)<<" A"<<endl;
        else if(count < k) cout<<1<<endl<<abs(count-k)<<" B"<<endl;
        else cout<<0<<endl;
    }
    
    return 0;
}

//wrong 