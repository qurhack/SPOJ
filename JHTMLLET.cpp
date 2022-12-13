//https://pl.spoj.com/problems/JHTMLLET/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string code;
    while(getline(cin, code))
    {
        bool upper = false;
        for(int i = 0; i < code.length(); i++)
        {
            if(!upper)
                cout << code[i];
            else
            {
              code[i] = toupper(code[i]);
              cout << code[i];
            }
            if(code[i] == '<')
                upper = true;
            if(code[i] == '>')
                upper = false;
        }
        
        cout << endl;
    }
}
