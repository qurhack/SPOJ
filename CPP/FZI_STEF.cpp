//https://pl.spoj.com/problems/FZI_STEF/

#include <iostream>

using namespace std;

int main()
{
    int cities;
    cin >> cities;
    
    long long tmp_profit = 0;
    long long max_profit = 0;

    for(int i = 0; i < cities; i++)
    {
        int profit;
        cin >> profit;
    
        tmp_profit+=profit;
            
        if(tmp_profit > max_profit)
            max_profit = tmp_profit;
        if(tmp_profit < 1)
            tmp_profit = 0;
    }

    cout << max_profit;
}
