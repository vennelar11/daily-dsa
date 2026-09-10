#differenceBetweenElementSum&DigitSum

class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int elementSum = 0, digitSum = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            elementSum += nums[i];
            digitSum += digSum(nums[i]);
        }
        return abs(elementSum - digitSum);
    }
    int digSum(int num)
    {
        int sum = 0, dig;
        while (num != 0)
        {
            dig = num % 10;
            sum += dig;
            num = num / 10;
        }
        return sum;
    }
};