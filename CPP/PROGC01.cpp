//https://pl.spoj.com/problems/PROGC01/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string sentence;
    int lines=0;
    while(getline(cin, sentence))
    {
        lines+=1;
    }
    cout << lines;
}
