

#include <iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {

        
        for (int i = 0;i < nums.size() - 1;i++)
        {
            for (int j = 0; j < nums.size()-i-1;j++)
            {
                if (nums[j] > nums[j + 1])
                    swap(nums[j], nums[j + 1]);
            }
        }
    }

    void display(vector<int>& nums)
    {
        cout << "[";
        for(int i =0;i < nums.size();i++)
        {
            cout << nums[i] << " ";
        }
        cout << "]" << "\n";
    }
};
int main()
{
    vector<int> nums = { 2,0,2,1,1,0 };
    int size = nums.size();

    Solution s;
    s.sortColors(nums);
    s.display(nums);
}

