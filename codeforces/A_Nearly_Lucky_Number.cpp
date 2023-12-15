#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int num;
    cin>>num;
    int lucky_numbers = 0;

    while(num != 0)
    {
        if(num %10 == 7 || num %10 == 4)
        {
            lucky_numbers++;
        }
        num /= 10;
    }

    if(lucky_numbers == 7 || lucky_numbers == 4) cout<<"YES";
    else cout<<"NO";

    return 0;
}