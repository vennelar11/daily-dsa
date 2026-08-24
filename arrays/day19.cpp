#minimumNumberGame

class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        vector<int> arr;
        int temp, n = nums.size();
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j < n - i - 1; j++)
            {
                if (nums[j] > nums[j + 1])
                {
                    temp = nums[j];
                    nums[j] = nums[j + 1];
                    nums[j + 1] = temp;
                }
            }
        }
        for (int i = 0; i < n; i = i + 2)
        {
            swap (nums[i], nums[i + 1]);
        }
        return nums;
    }
};