//https://pl.spoj.com/problems/JROWLIN/

#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
	double a, b, c, x;
	cin >> a >> b >> c;
	if(a==0)
	{
		if (c - b == 0) 
		{
			cout << "NWR";
		}
		else
		{
			cout << "BR";
		}
		
	}
	else
	{
		x = (c - b) / a;
		x = round(x * 100) / 100;
		cout << fixed << setprecision(2) << x; //to maintain .00 if that's a case
	}
}

