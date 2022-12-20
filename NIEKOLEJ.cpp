//https://pl.spoj.com/submit/NIEKOLEJ/

#include <iostream>

using namespace std;

int main()
{
    int num;
    cin >> num; 
    
    if(num >= 3 || num == 0)
    {
        for(int i = 0; i <= num; i++)
            if(i%2!=0)
                cout << i << " ";
        for(int i = 0; i <= num; i++)
            if(i%2==0)
                cout << i << " ";
    }
    else
        cout << "NIE";
}
