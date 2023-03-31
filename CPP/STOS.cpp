//https://pl.spoj.com/problems/STOS/

#include <iostream>

using namespace std;

int main()
{
    int stack[10];
    char operation;
    int pos = 0;
    while(cin >> operation)
    {
        if(operation == 43)
        {
            int num;
            cin >> num;
            if(pos >= 10)
                cout << ':' << '(' << endl;
            else
            {
                stack[pos] = num;
                pos++;
                cout << ':' << ')' << endl;
            }
        }
        else if(operation == 45 && pos != 0)
        {
            pos--;
            cout << stack[pos] << endl;
            stack[pos] = 0;
        }
        else
            cout << ':' << '(' << endl;
    }
}
