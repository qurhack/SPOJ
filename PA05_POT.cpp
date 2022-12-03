//https://pl.spoj.com/problems/PA05_POT/

#include <iostream>
using namespace std;

int main()
{
    unsigned int tests;
    cin >> tests;
    for (int j = 0; j < tests; j++)
    {
        unsigned int a, b;
        cin >> a >> b;
        if (a >= 1 && b >= 1)
        {
            int unit = a % 10;

            if (unit == 0)
            {
                cout << 0 << endl;
            }

            else if (unit == 1)
            {
                cout << 1 << endl;
            }

            else if (unit == 2)
            {
                if (b % 4 == 1)
                {
                    cout << 2 << endl;
                }
                else if (b % 4 == 2)
                {
                    cout << 4 << endl;
                }
                else if (b % 4 == 3)
                {
                    cout << 8 << endl;
                }
                else if (b % 4 == 0)
                {
                    cout << 6 << endl;
                }
            }

            else if (unit == 3)
            {
                if (b % 4 == 1)
                {
                    cout << 3 << endl;
                }
                else if (b % 4 == 2)
                {
                    cout << 9 << endl;
                }
                else if (b % 4 == 3)
                {
                    cout << 7 << endl;
                }
                else if (b % 4 == 0)
                {
                    cout << 1 << endl;
                }
            }

            else if (unit == 4)
            {
                if (b % 2 == 1)
                {
                    cout << 4 << endl;
                }
                else if (b % 2 == 0)
                {
                    cout << 6 << endl;
                }
            }

            else if (unit == 5)
            {
                cout << 5 << endl;
            }

            else if (unit == 6)
            {
                cout << 6 << endl;
            }

            else if (unit == 7)
            {
                if (b % 4 == 1)
                {
                    cout << 7 << endl;
                }
                else if (b % 4 == 2)
                {
                    cout << 9 << endl;
                }
                else if (b % 4 == 3)
                {
                    cout << 3 << endl;
                }
                else if (b % 4 == 0)
                {
                    cout << 1 << endl;
                }
            }

            else if (unit == 8)
            {
                if (b % 4 == 1)
                {
                    cout << 8 << endl;
                }
                else if (b % 4 == 2)
                {
                    cout << 4 << endl;
                }
                else if (b % 4 == 3)
                {
                    cout << 2 << endl;
                }
                else if (b % 4 == 0)
                {
                    cout << 6 << endl;
                }
            }

            else if (unit == 9)
            {
                if (b % 2 == 1)
                {
                    cout << 9 << endl;
                }
                else if (b % 2 == 0)
                {
                    cout << 1 << endl;
                }
            }
        }
    }
}


