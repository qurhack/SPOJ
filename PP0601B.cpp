//https://pl.spoj.com/problems/PP0601B/

#include <iostream>

using namespace std;

int main()
{
    int tests;
    cin >> tests;
    for(int t = 0; t < tests; t++)
    {
        int n, x, y;
        cin >> n >> x >> y;
        for(int i = 2; i < n; i++)
            if(i % x == 0 && i % y != 0)
                cout << i << " ";
        cout << endl;
    }
}
