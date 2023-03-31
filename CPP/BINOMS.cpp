//https://pl.spoj.com/problems/BINOMS/

#include <iostream>
#include <cmath>

using namespace std;

int subsets(int, int);

int main()
{
    int tests;
    cin >> tests;
    for(int t = 0; t < tests; t++)
    {
        int n, k;
        cin >> n >> k;
        cout << subsets(n,k) << endl;
    }
}

int subsets(int n, int k)
{
    if(n == 0 || k == 0)
        return 1;
    else
        {
            long double nominator = n;
            for(int i = 1; i < n-(n-k); i++)
                nominator *= (n-i);
            long double denominator = k;
            for(int i = 1; i < k; i++)
                denominator *= (k-i);
            return round(nominator/denominator);
        }
}
