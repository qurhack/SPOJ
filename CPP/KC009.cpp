//https://pl.spoj.com/problems/KC009/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string word;
    while(cin >> word)
    {
        for(int i = word.length()-1; i >= 0; i--)
            cout << word[i];
        cout << endl;
    }
}
