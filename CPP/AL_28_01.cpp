//https://pl.spoj.com/problems/AL_28_01/

#include <iostream>
#include <string>

using namespace std;

void func(string S, int N)
{
    int midIndex = N/2;
    
    for(int i = 0; i < midIndex+1; i++)
    {
        int dots = N-1-2*i;
        int letters = N-dots;
        
        for(int j = 0; j < dots/2; j++)
            cout << '.';
        for(int z = dots/2; z < (dots/2)+letters; z++)
            cout << S[z];
        for(int k = (dots/2)+letters; k < N; k++)
            cout << '.';
        
        cout << endl;
    }
}

int main()
{ 
    int N;
    string S;
    cin >> N;
    cin >> S;
    func(S,N);
}
