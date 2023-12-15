#include <bits/stdc++.h>
using namespace std;
int main()
{
    int stops;
    cin>>stops;

    int total = 0;
    int capacity = INT_MIN;

    for(int i = 0; i<stops; i++)
    {
        int exit, enter;
        cin>>exit>>enter;
        total += enter - exit;
        if(total >= capacity) capacity = total;

    }
    cout<<capacity;
    return 0;
}