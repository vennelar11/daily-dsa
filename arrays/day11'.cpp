#minimumElementAfterReplacingDigitSum

class Solution {
public:
    int minElement(vector<int>& nums) {
        int sum, number, dig;
        vector<int> sums(nums.size());
        for (int i = 0; i < nums.size(); i++)
        {
            sum = 0;
            number = nums[i];
            while (number != 0)
            {
                dig = number % 10;
                sum += dig;
                number = number / 10;
            }
            sums[i] = sum;
        }
        int minimum = sums[0];
        for (int i = 1; i < sums.size(); i++)
        {
            if (sums[i] < minimum)
            {
                minimum = sums[i];
            }
        }
        return minimum;
    }
};