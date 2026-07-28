#targetIndices

class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int i, j, temp;
        vector<int> indices;
        for (i = 0; i < nums.size() - 1; i++)
        {
            for (j = 0; j < nums.size() - 1 - i; j++)
            {
                if (nums[j] > nums[j+1])
                {
                    temp = nums[j];
                    nums[j] = nums[j+1];
                    nums[j + 1] = temp;
                }
            }
        }
        for (i = 0; i < nums.size(); i++)
        {
            if (nums[i] == target)
            {
                indices.push_back(i);
            }
        }
        return {indices};
    }
};