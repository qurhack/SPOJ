//https://pl.spoj.com/problems/PP0602D/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
 
    int amount, k;
    cin >> amount >> k;
    
    vector<int> nums;
    
    for(int i = 0; i < amount; i++)
    {
        int num;
        cin >> num;
        nums.push_back(num);
    }
    
    for(int j = 0; j < k; j++)
    {
        for(int i = 0; i < nums.size(); i++)
        {
            if(i == 0)
                nums.push_back(nums[i]);
            int tmp = nums[i+1];
            nums[i+1] = nums[i];
            nums[i] = tmp;
        }

        nums.erase(nums.end()-1);
    }
    
    for(auto number:nums)
        cout << number << ' '; 
}
