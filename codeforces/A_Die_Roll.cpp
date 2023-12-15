#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, denomenator = 6;
    cin>>a>>b;

    int maximum = max(a,b);
    int numerator = denomenator - (maximum - 1);

    for(int i = 0; i<denomenator; i++)
    {
        if(numerator %(i+1) == 0  && denomenator %(i+1) == 0)   
        // two values divided by same value
        {
            numerator /= i+1;
            denomenator /= i+1;
        }
    }
    cout<<numerator<<"/"<<denomenator;
    return 0;
}