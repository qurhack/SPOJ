//https://pl.spoj.com/problems/JZLICZ/

#include <iostream>
#include <string>
#include <list>

using namespace std;

bool cmp(char, char);

int main()
{
    list <char> chars;
    list <char> chars_unique;
    
    int n;
    cin >> n;
    cin.ignore();
    
    while(n--)
    {
        string sentence;
        getline(cin, sentence);
        for(int i = 0; i < sentence.length(); i++)
            if(sentence[i] != ' ')
                chars.push_back(sentence[i]);
    }
        
    chars.sort();
    chars_unique = chars;
    chars_unique.unique();
    
    for(auto it = chars_unique.begin(); it != chars_unique.end(); it++)
    {
        if(!isupper(*it))
        {
            int counter = 0;
            for(auto jt = chars.begin(); jt != chars.end(); jt++)
                if(*it == *jt)
                    counter++; 
            cout << *it << ' ' << counter << endl;
            chars.remove(*it);
        }
    }
    
    for(auto it = chars_unique.begin(); it != chars_unique.end(); it++)
    {
        if(isupper(*it))
        {
            int counter = 0;
            for(auto jt = chars.begin(); jt != chars.end(); jt++)
                if(*it == *jt)
                    counter++; 
            cout << *it << ' ' << counter << endl;
            chars.remove(*it);
        }
    }
}
