//https://pl.spoj.com/problems/MWPZ06D/

#include <iostream>

using namespace std;

int main()
{
    int tests, persons, sweets;
    cin >> tests;
    for(int t = 0; t < tests; t++)
    {
        cin >> persons >> sweets;
        persons = persons - 1;
        
        if(persons > 0 && sweets >= persons && sweets % persons == 0)
        {
            cout << "NIE" << endl;
        }
        else
        {
            cout << "TAK" << endl;
        }
    }
}


