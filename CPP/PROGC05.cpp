//https://pl.spoj.com/problems/PROGC05/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string word;
    while(getline(cin,word))
    {
        char letter = word[0];
        
        for(int i = 2; i < word.length(); i++)
            if(word[i]!=letter)
                cout << word[i];
        cout << endl;
    }
}
