//https://pl.spoj.com/problems/TABLICA/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> nums;
    int num;
    while(cin >> num)
        nums.push_back(num);
    for(int i = nums.size()-1; i >= 0; i--)
        cout << nums[i] << ' ';
}
