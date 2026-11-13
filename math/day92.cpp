#checkPrimeFrequency

class Solution {
public:
    bool checkPrimeFrequency(vector<int>& nums) {
        for (int x : nums)
        {
            if (isPrime(countNum(nums, x)))
            {
                return true;
            }
        }
        return false;
    }
    int countNum(vector<int>& nums, int n)
    {
        int count = 0;
        for (int i : nums)
        {
            if (n == i)
            {
                count++;
            }
        }
        return count;
    }
    bool isPrime(int c)
    {
        if (c <= 1)
        {
            return false;
        }
        if (c == 2)
        {
            return true;
        }
        if (c % 2 == 0)
        {
            return false;
        }
        for (int i = 3; i <= sqrt(c); i++)
        {
            if (c % i == 0)
            {
                return false;
            }
        }
        return true;
    }
};