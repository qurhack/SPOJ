//https://pl.spoj.com/problems/JWSPLIN/

#include <iostream>

using namespace std;

int main()
{
    int tests, point;
    int points [6] = {0};
    
    cin >> tests;
    
    for(int i = 0; i < tests; i++)
    {
        for(int j = 0; j < 6; j++)
        {
            cin >> point;
            points[j] = point;
        }
        
        if(points[0]*points[3] + points[1]*points[4] + points[2]*points[5]
        - points[3]*points[4] - points[0]*points[5] - points[1]*points[2] == 0) //determinant of the matrix calculation
        {
            cout << "TAK" << endl;
        }
        else
        {
            cout << "NIE" << endl;
        }
    }
}


