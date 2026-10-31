#divideArrayIntoEqualPairs

class Solution {
public:
    bool divideArray(vector<int>& nums) {
        for (int x : nums)
        {
            if(frequency(nums, x) % 2 != 0)
            {
                return false;
            }
        }
        return true;
    }
    int frequency(vector<int>& nums, int num)
    {
        int count = 0;
        for (int x : nums)
        {
            if (num == x)
            {
                count++;
            }
        }
        return count;
    }
};