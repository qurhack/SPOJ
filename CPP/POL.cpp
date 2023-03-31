//https://pl.spoj.com/problems/POL/

#include <iostream>
#include <string> 

using namespace std;

int main()
{
    int tests;
    string phrase;
    
    cin >> tests;
    
    for(int i = 0; i < tests; i++)
    {
        while(getline(cin,phrase))
        {
            cout << phrase.substr(0, phrase.length()/2) << endl;
        }
    }
}


