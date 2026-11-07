#findArrayStateAfterKMultiplications

class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        int op = 1;
        while (op <= k)
        {
            int minimum = minIndex(nums);
            nums[minimum] *= multiplier;
            op++;
        }
        return nums;
    }
    int minIndex(vector<int>& nums)
    {
        int index = 0;
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] < nums[index])
            {
                if (nums[i] != nums[index])
                {
                    index = i;
                }
            }
        }
        return index;
    }
};