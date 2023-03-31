//https://pl.spoj.com/problems/KC004/

#include <iostream>

using namespace std;

int main()
{
    int search, length;
    while(cin >> search >> length)
    {
        int counter = 0;
        for(int i = 0; i < length; i++)
        {
            int num;
            cin >> num;
            if(num == search)
                counter++;
        }
        cout << counter << endl;
    }
}
