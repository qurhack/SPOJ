//https://pl.spoj.com/problems/FCTRL3/

#include <iostream>
using namespace std;

int strong(unsigned int n) 
{
    if (n <= 1)
    {
        return 1;
    }
    return strong(n - 1) * n;
}

int main()
{
    int tests;
    cin >> tests;
    for(int i = 0; i<tests; i++)
    {
        unsigned int num;
        cin >> num;
        if (num <= 9)
        {
            int strongResult = strong(num);
            unsigned int unit = strongResult % 10;
            unsigned int decimal = (strongResult % 100) / 10;
            cout << decimal << " " << unit << endl;
        }
        else
        {
            cout << 0 << " " << 0 << endl;
        }
    }
}

