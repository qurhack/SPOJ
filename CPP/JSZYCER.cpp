//https://pl.spoj.com/problems/JSZYCER/

#include <iostream>
#include <string> 

using namespace std;

int main()
{
    char chars[26] {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    string sentence;
    while(getline(cin,sentence))
    {
        for(int i = 0; i < sentence.length(); i++)
        {
            if(sentence[i] == ' ')
                cout << ' ';
            else
                for(int j = 0; j < 26; j++)
                    if(sentence[i] == chars[j])
                        if(j==23)
                            cout << chars[0];
                        else if(j==24)
                            cout << chars[1];
                        else if(j == 25)
                            cout << chars[2];
                        else
                            cout << chars[j+3];
        }
        cout << endl;
    }
}


