//https://pl.spoj.com/problems/PRZEDSZK/

#include <iostream>
using namespace std;

//func to return greatest common divisor
int gcd(int a, int b) 
{	
	while (true)
	{
		a = a % b;
		if (a == 0)
		{
			return b;
			break;
		}
		b = b % a;
		if (b == 0)
		{
			return a;
			break;
		}
	}
}

int main()
{
	int tests;
	cin >> tests;
	for(int i = 0; i < tests; i++)
	{
		int a, b; //group A and group B
		cin >> a >> b;
		int sweets = a * b / gcd(a, b);
		cout << sweets << endl;
	}
}

