//https://pl.spoj.com/problems/GLUTTON/

#include <iostream>

using namespace std;

int main()
{
	int tests;
	cin >> tests;
	for(int i = 0; i < tests; i++)
	{
		int eaters;
		int cookiesInBox;
		cin >> eaters >> cookiesInBox;

		int timePerCookie;
		int cookies=0;

		for(int j = 0; j < eaters; j++)
		{
			cin >> timePerCookie;
			cookies += 86400 / timePerCookie;
		}

		int boxes;

		if(cookies % cookiesInBox != 0)
		{
			boxes = (cookies / cookiesInBox) + 1;
		}
		else
		{
			boxes = cookies / cookiesInBox;
		}

		cout << boxes << endl;
	}
}

