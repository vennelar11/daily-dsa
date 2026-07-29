#concatenationOfArray

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> concat_array(nums.size() * 2);
        for (int i = 0; i < nums.size(); i++)
        {
            concat_array[i] = nums[i];
            concat_array[i + nums.size()] = nums[i];
        }
        return {concat_array};
    }
};