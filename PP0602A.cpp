//https://pl.spoj.com/problems/PP0602A/

#include <iostream>

using namespace std;

int main()
{
    int tests;
    cin >> tests;
    for (int t = 0; t < tests; t++)
    {
        int n;
        cin >> n;
        
        int arr[100];
        int p = 0;
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
            p++;
        }
        
        for(int i = 0; i < p; i++)
        {
            if(i%2 != 0)
            {
                cout << arr[i] << " ";
            }
        }
        for(int i = 0; i < p; i++)
        {
            if(i%2 == 0)
            {
                cout << arr[i] << " ";
            }
        }
        cout << endl;
    }
}
