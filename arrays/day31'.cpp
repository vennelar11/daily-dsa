#findNumbersWithEvenNumberOfDigits

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int evens = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (countDig(nums[i]) % 2 == 0)
            {
                evens++;
            }
        }
        return evens;
    }
    int countDig(int num)
    {
        int count = 0;
        while (num != 0)
        {
            num = num / 10;
            count++;
        }
        return count;
    }
};