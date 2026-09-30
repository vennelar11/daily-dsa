#countDistinctIntegers

class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        int n = nums.size();
        nums.reserve(2 * n);
        for (int i = 0; i < n; i++)
        {
            nums.push_back(reverseNum(nums[i]));
        }
        sort(nums.begin(), nums.end());
        nums.erase(unique(nums.begin(), nums.end()), nums.end());
        return nums.size();
    }
    int reverseNum(int num)
    {
        int rev = 0;
        while (num != 0)
        {
            rev = rev * 10 + (num % 10);
            num = num / 10;
        }
        return rev;
    }
};