#maxDifference

class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        vector<int> diff;
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (nums[i] < nums[j])
                {
                    diff.push_back(nums[j] - nums[i]);
                }
            }
        }
        if (diff.size() == 0)
        {
            return -1;
        }
        int maximum = diff[0];
        for (int i = 1; i < diff.size(); i++)
        {
            if (diff[i] > maximum)
            {
                maximum = diff[i];
            }
        }
        return maximum;
    }
};