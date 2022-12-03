//https://pl.spoj.com/problems/PP0501A/

#include <iostream>
using namespace std;

int nwd(int a, int b)
{
	while (b != 0)
	{
		a = a % b;
		if(a == 0)
		{
			return b;
		}
		b = b % a;
	}
	return a;
}

int main()
{
	int tests;
	cin >> tests;
	for(int i = 0; i < tests; i++)
	{
		int a, b;
		cin >> a >> b;
		cout << nwd(a, b) << endl;
	}
}

