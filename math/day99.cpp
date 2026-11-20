#countDigitAppearances

class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int count = 0, n = nums.size();
        for (int i = 0; i < n; i++)
        {
            count += digitCount(nums[i], digit);
        }
        return count;
    }
    int digitCount(int num, int digit)
    {
        int c = 0;
        while (num != 0)
        {
            int d = num % 10;
            if (d == digit)
            {
                c++;
            }
            num = num / 10;
        }
        return c;
    }
};