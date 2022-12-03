//https://pl.spoj.com/problems/PP0504B/

#include <iostream>
#include <string>;

using namespace std;

string string_merge(string a, string b)
{
	int aLen = a.length();
	int bLen = b.length();
	string result = "";
	if(aLen<=bLen)
	{
		for(int i=0; i<aLen; i++)
		{
			result+=a[i];
			result += b[i];
		}
		return result;
	}
	else
	{
		for (int i = 0; i < bLen; i++)
		{
			result += a[i];
			result += b[i];
		}
		return result;
	}

}

int main()
{
	int tests;
	cin >> tests;
	for(int i = 0; i < tests; i++)
	{
		string a, b;
		cin >> a;
		cin.ignore(1, ' ');
		cin >> b;
		cout << string_merge(a, b) << endl;
	}
}

