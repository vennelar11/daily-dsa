#separateDigitsInArray

class Solution {
public:
    vector<int> ans;
    vector<int> separateDigits(vector<int>& nums) 
    {
        reverse(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] > 9)
            {
               splitDigit(nums[i]);
            }
            else if (nums[i] <= 9)
            {
                ans.push_back(nums[i]);
            }
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
    void splitDigit(int n)
    {
        int digit;
        while (n != 0)
        {
            digit = n % 10;
            ans.push_back(digit);
            n = n / 10;
        }
    }
};