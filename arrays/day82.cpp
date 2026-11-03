#minMovesToEqualAnArray

class Solution {
public:
    int minMoves(vector<int>& nums) {
        int max = findMax(nums);
        int moves = 0;
        for (int x : nums)
        {
            moves += (max - x);
        }
        return moves;
    }
    int findMax(vector<int>& nums) {
        int m = nums[0];
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] > m)
            {
                m = nums[i];
            }
        }
        return m;
    }
};