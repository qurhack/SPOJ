//https://pl.spoj.com/problems/VSR/

#include <iostream>

using namespace std;

int main()
{
    int tests;
    cin >> tests;
    for(int t = 0; t < tests; t++)
    {
        int v1, v2;
        cin >> v1 >> v2;
        int av = 2*(v1*v2)/(v1+v2);
        cout << av << endl;
    }
}
