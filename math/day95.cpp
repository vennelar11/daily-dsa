#maximumPrimeDifference

class Solution {
public:
    int maximumPrimeDifference(vector<int>& nums) {
        int n = nums.size();
        int minPrime = -1, maxPrime = -1;
        for (int i = 0; i < n; i++)
        {
            if (isPrime(nums[i]))
            {
                if (minPrime == -1)
                {
                    minPrime = i;
                }
                maxPrime = i;
            }
        }
        return maxPrime - minPrime;
    }
    bool isPrime(int n)
    {
        if (n <= 1)
        {
            return false;
        }
        if (n == 2)
        {
            return true;
        }

        if (n % 2 == 0)
        {
            return false;
        }
        for (int i = 3; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                return false;
            }
        }
        return true;
    }
};