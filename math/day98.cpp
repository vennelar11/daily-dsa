#minimumSumOfMountainTriplets

class Solution {
public:
    int minimumSum(vector<int>& nums) {
        int count = 0, currentSum, minSum = INT_MAX, n = nums.size();
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                for (int k = j + 1; k < n; k++)
                {
                    if (nums[i] < nums[j] && nums[k] < nums[j])
                    {
                        currentSum = nums[i] + nums[j] + nums[k];
                        if (currentSum < minSum)
                        {
                            minSum = currentSum;
                        }
                    }
                }
            }
        }
        if (minSum == INT_MAX)
        {
            return -1;
        }
        return minSum;
    }
};