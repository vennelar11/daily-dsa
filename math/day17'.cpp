#findingGCDofMin&Max

class Solution {
public:
    int findGCD(vector<int>& nums) {
        int max = nums[0], min = nums[0];
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] > max)
            {
                max = nums[i];
            }
            if (nums[i] < min)
            {
                min = nums[i];
            }
        }
        return gcd(min, max);
    }
    int gcd(int a, int b)
    {
        if (b == 0)
        {
            return a;
        }
        return gcd(b, a % b);
    }
};