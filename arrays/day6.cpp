#findMissingElements

class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> missingNums;
        int minimum = *std::min_element(nums.begin(), nums.end());
        int maximum = *std::max_element(nums.begin(), nums.end());
        for (int i = minimum + 1; i < maximum; i++)
        {
            bool present = false;
            for (int j = 0; j < nums.size(); j++)
            {
                if (i == nums[j])
                {
                    present = true;
                    break;
                }
            }
            if (!present)
            {
                missingNums.push_back(i);
            }
        }
        return {missingNums};
    }
};