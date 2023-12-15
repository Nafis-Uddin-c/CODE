#include <bits/stdc++.h>
using namespace std;

int main()
{

    // long long int total_number, time, number, oven_time, total_time;
    // cin >>total_number>>time>>number>>oven_time;
    // total_time = (total_number+number-1)/number*time;
    // if (oven_time>=total_time)cout <<"NO\n";
    // else ((total_time-oven_time+time-1)/time==1)? cout <<"NO" :cout<<"YES";


    int total_number, time, number, oven_time;
    cin>>total_number>>time>>number>>oven_time;
    int total_time_one, count_single = 0;

    while((number*count_single) < total_number) 
    count_single++;
    
    int completed_number = 0, total_time_both = 0;
    bool flag = 0;

    while(total_number > completed_number)
    {   
        completed_number += number;
        total_time_both += time;

        if((completed_number < total_number) && (total_time_both > oven_time))
        {
            completed_number += number;
            if(flag == 0)
            {
                total_time_both = oven_time + time;
                flag == 1;
            }
        }
    }
    total_time_one = (count_single * time);

    (total_time_both >= total_time_one)? cout<<"NO" : cout<<"YES";
        
    return 0;
}