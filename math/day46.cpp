#smallestIndexWithDigSumEqualToIndex

class Solution {
public:
    int smallestIndex(vector<int>& nums) 
    {
        int min = nums.size();
        for (int i = 0; i < nums.size(); i++)
        {
            if (digitSum(nums[i]) == i)
            {
                if (i < min)
                {
                    min = i;
                }
            }
        }
        if (min == nums.size())
        {
            return -1;
        }
        return min;
    }
    int digitSum(int n)
    {
        if (n <= 9)
        {
            return n;
        }
        int dig, sum = 0;
        while (n != 0)
        {
            dig = n % 10;
            sum += dig;
            n = n / 10;
        }
        return sum;
    }
};