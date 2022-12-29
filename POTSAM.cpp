//https://pl.spoj.com/problems/POTSAM/

#include <iostream>

using namespace std;

int main()
{
    int rows_biz, rows_eco, seats_biz, seats_eco;
    cin >> rows_biz >> seats_biz >> rows_eco >> seats_eco;
    cout << (rows_biz*seats_biz)+(rows_eco*seats_eco);
}
