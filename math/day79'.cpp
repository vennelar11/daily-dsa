#sumOfElementsWithFreqDivByK

class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) {
        int sum = 0;
        vector<int> numsDup = nums;
        sort(numsDup.begin(), numsDup.end());
        numsDup.erase(unique(numsDup.begin(), numsDup.end()), numsDup.end());
        for (int x : numsDup)
        {
            if ((frequency(nums, x)) % k == 0)
            {
                sum += (frequency(nums, x) * x);
            } 
        }
        return sum;
    }
    int frequency(vector<int>& nums, int num)
    {
        int count = 0;
        for (int x : nums)
        {
            if (num == x)
            {
                count++;
            }
        }
        return count;
    }
};