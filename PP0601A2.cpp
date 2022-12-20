//https://pl.spoj.com/problems/PP0601A2/

#include <iostream>

using namespace std;

int main()
{
    int num;
    int counter = 0;
    int previous = 42; 
    while(cin >> num && counter != 3)
    {
        if(num == 42 && previous != 42)
            counter++;
        
        cout << num << endl;
        
        previous = num;
    }
}


