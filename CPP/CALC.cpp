//https://pl.spoj.com/problems/CALC/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string calc;
    int spacePointers[2];
    int num1, num2;
    char symbol;

    while (getline(cin,calc)) //getline to allow single string input with spaces
    {
        int spacePointersIter = 0;
        for(int i = 0; i < calc.length(); i++)
        {
            if (calc[i] == ' ')
            {
                spacePointers[spacePointersIter] = i;
                spacePointersIter += 1;
            }
        }

        symbol = calc[0];
        num1 = stoi(calc.substr(1, spacePointers[1]-spacePointers[0]));
        num2 = stoi(calc.substr(spacePointers[1], calc.length()-spacePointers[1]));

        if (symbol == '-')
            cout << num1 - num2 << endl;
        else if (symbol == '+')
            cout << num1 + num2 << endl;
        else if (symbol == '/')
            cout << num1 / num2 << endl;
        else if (symbol == '*')
            cout << num1 * num2 << endl;
        else if (symbol == '%')
            cout << num1 % num2 << endl;
    }
}

