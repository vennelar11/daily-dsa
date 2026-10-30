#largestNumberAtLeastTwice

class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int ind = findMax(nums);
        for (int i = 0; i < nums.size(); i++)
        {
            if (i != ind && nums[ind] < 2 * nums[i])
            {
                return -1;
            }
        }
        return ind;
    }
    int findMax(vector<int>& nums)
    {
        int maxIndex = 0;
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] > nums[maxIndex])
            {
                maxIndex = i;
            }
        }
        return maxIndex;
    }
};