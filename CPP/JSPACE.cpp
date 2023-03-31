//https://pl.spoj.com/problems/JSPACE/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string sentence;
    
    while(getline(cin, sentence))
    {
        for(int i = 0; i < sentence.length(); i++)
        {
            if(sentence[i] != ' ')
                cout << sentence[i];
            else
                sentence[i+1] = toupper(sentence[i+1]);
        }
        
        cout << endl;
    }
}
