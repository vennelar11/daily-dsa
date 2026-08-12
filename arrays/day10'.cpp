#leftAndRightSumDifferences

class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        vector<int> leftSum(n), rightSum(n), answer(n);
        for (int i = 0; i < n; i++)
        {
            int sum = 0;
            for (int j = i + 1; j < n; j++)
            {
                if (i ==  n)
                {
                    sum = 0;
                }
                else
                {
                    sum += nums[j];
                }
                rightSum[i] = sum;
            }
        }
        for (int i = n - 1; i >= 0; i--)
        {
            int sum = 0;
            for (int j = 0; j < i; j++)
            {
                if (i ==  0)
                {
                    sum = 0;
                }
                else
                {
                    sum += nums[j];
                }
                leftSum[i] = sum;
            }
        }
        for (int i = 0; i < n; i++)
        {
            answer[i] = abs(leftSum[i] - rightSum[i]);
        }
        return answer;
    }
};