#sumOfUniqueElements

class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int sum = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (isUnique(nums, nums[i], i))
            {
                sum += nums[i];
            }
        }
        return sum;
    }
    bool isUnique(vector<int>& nums, int x, int index)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            if (index != i && nums[i] == x)
            {
                return false;
            }
        }
        return true;
    }
};