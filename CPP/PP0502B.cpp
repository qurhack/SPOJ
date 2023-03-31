//https://pl.spoj.com/problems/PP0502B/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int tests;
	cin >> tests;
	for(int i = 0; i < tests; i++)
	{
		int n, num;
		cin >> n;
		vector<int> nums;

		for(int j = 0; j < n; j++)
		{
			cin >> num;
			nums.push_back(num);
		}


		for(int z = nums.size()-1; z >= 0; z--)
		{
			if(z == 0)
			{
				cout << nums[z];
			}
			else
			{
				cout << nums[z] << " ";
			}
		}
		cout << endl;
	}
}

