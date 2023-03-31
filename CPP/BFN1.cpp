//https://pl.spoj.com/problems/BFN1/

#include <iostream>
#include <string>
using namespace std;

string reverseStr(string txt)
{
	int len = txt.length();
	int n = len - 1;

	for(int i = 0; i < (len/2); i++)
	{
		swap(txt[i], txt[n]);
		n -= 1;
	}

	return txt;
}

bool isPalindrome(int num)
{
	int numBackward = stoi(reverseStr(to_string(num)));
	if(num == numBackward)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	int tests;
	cin >> tests;
	for(int i = 0; i < tests; i++)
	{
		int num;
		cin >> num;

		int tries = 0;

		int sum = num;
		while (true)
		{
			if (isPalindrome(sum))
			{
				cout << sum << " " << tries << endl;
				break;
			}
			else
			{
				sum += stoi(reverseStr(to_string(sum)));
				tries += 1;
			}
		}
	}
}

