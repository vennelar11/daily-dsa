#smallerNumbersThanCurrent

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int j, count;
        vector<int> counts(nums.size());
        for (int i = 0; i < nums.size(); i++)
        {
            j = 0;
            count = 0;
            while (j < nums.size())
            {
                if (nums[j] < nums[i])
                {
                    count++;
                }
                j++;
                counts[i] = count;
            }
        }
        return {counts};
    }
};