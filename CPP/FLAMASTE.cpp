//https://pl.spoj.com/problems/FLAMASTE/

#include <iostream>
#include <string>
using namespace std;

int main()
{
	int tests;
	cin >> tests;
	for(int i = 0; i < tests; i++)
	{
		string txt;
		cin >> txt;

		int count;

		for(int j = 0; j < txt.length(); j++)
		{
			count = 1;
			cout << txt[j];

			for(int z=j+1; z<=txt.length(); z++)
			{
				if(txt[j] == txt[z])
				{
					count += 1;
					j++;
				}
				else
				{ 
					break; 
				}	
			}

			if(count == 2)
			{
				cout << txt[j];
			}
			if(count > 2)
			{
				cout << count;
			}
		}
		cout << endl;
	}
}

