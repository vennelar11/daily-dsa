#digitGame

class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int singleSum = 0, doubleSum = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (digCount(nums[i]) == 2)
            {
                doubleSum += nums[i];
            }
            else if (digCount(nums[i]) == 1)
            {
                singleSum += nums[i];
            }
        }
        if (doubleSum != singleSum)
        {
            return true;
        }
        return false;
    }
    int digCount(int n)
    {
        int count = 0;
        while (n != 0)
        {
            n = n / 10;
            count++;
        }
        return count;
    }
};