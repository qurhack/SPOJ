//https://pl.spoj.com/problems/ETI06F1/

#include <iostream>
#include <math.h>
#include <iomanip>


using namespace std;

int main()
{
	double r, d;
	cin >> r >> d;

	double S = (r * r - d * d / 4) * 3.141592654; 
	S = round(S * 100) / 100; //to round S to 2 decimals

	cout << fixed << setprecision(2) << S << endl; //i used fixed and setprecision to avoid scientific notation with higher nums
}

