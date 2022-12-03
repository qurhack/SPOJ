//https://pl.spoj.com/problems/JPESEL/

#include <iostream>
#include <string>

using namespace std;

int main()
{
	int tests;
	cin >> tests;
	for(int i = 0; i<tests; i++)
	{
		string pesel;
		cin >> pesel;

		int sum;

		sum = int(pesel[0])-48 + (int(pesel[1])-48) * 3 + (int(pesel[2])-48) * 7 + (int(pesel[3])-48) * 9 + int(pesel[4])-48 + (int(pesel[5])-48) * 3
			+ (int(pesel[6])-48) * 7 + (int(pesel[7])-48) * 9 + int(pesel[8])-48 + (int(pesel[9])-48) * 3 + int(pesel[10])-48; //-48 everywhere because of ascii char table, nums are starting from 48

		if (sum > 0)
		{
			pesel = to_string(sum);
			if (pesel[pesel.length() - 1] == '0')
				cout << 'D' << endl;
			else
				cout << 'N' << endl;
		}
		else
			cout << 'N' << endl;

	}
}

