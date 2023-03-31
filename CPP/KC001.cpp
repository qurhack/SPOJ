//https://pl.spoj.com/problems/KC001/

#include <iostream>

using namespace std;

int main()
{
    int num;
    int sum = 0;
    while(cin >> num)
    {
        sum+=num;
    }
    cout << sum;
}
