#countPartitions

class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        for (int i = 1; i < n; i++)
        {
            if (abs(calculateSum(nums, 0, i) - calculateSum(nums, i + 1, n - 1)) % 2 == 0)
            {
                count++;
            }
        }
        return count;
    }
    int calculateSum(vector<int>& nums, int low, int high) {
        int sum = 0;
        for (int i = low; i <= high; i++)
        {
            sum += nums[i];
        }
        return sum;
    }
};