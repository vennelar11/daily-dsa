#keepMultiplying

class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        while (isFound(nums, original))
        {
            original *= 2;
        }
        return original;
    }
    bool isFound(vector<int>& nums, int target)
    {
        for (int i : nums)
        {
            if (i == target)
            {
                return true;
            }
        }
        return false;
    }
};