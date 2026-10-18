#minimumOperations

class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int count = sum(nums) % k;
        return count;
    }
    int sum(vector<int>& nums)
    {
        int sum = 0;
        for (int x : nums)
        {
            sum += x;
        }
        return sum;
    }
};