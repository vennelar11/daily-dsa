#runningSumOfArray

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int sum;
        vector<int> sums(nums.size());
        for (int i = 0; i < nums.size(); i++)
        {
            sum = 0;
            for (int j = 0; j <= i; j++)
            {
                sum += nums[j];
            }
            sums[i] = sum;
        }
        return sums;
    }
};