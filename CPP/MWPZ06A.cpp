//https://pl.spoj.com/problems/MWPZ06A/

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int tests, x, y, z;
    double pregnancy;
    cin >> tests;
    for(int t = 0; t < tests; t++)
    {
        cin >> x >> y >> z;
        pregnancy = (x+y-z*y)/(z-1.0) * 12;
        if(pregnancy < 0)
        {
            pregnancy = pregnancy * -1;
        }
        cout << round(pregnancy) << endl;
    }
}


