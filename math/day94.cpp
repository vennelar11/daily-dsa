#primeInDiagonal

class Solution {
public:
    int diagonalPrime(vector<vector<int>>& nums) {
        int  n = nums.size();
        int largest = 0;
        for (int i = 0; i < n; i++)
        {
            if (nums[i][i] > largest && isPrime(nums[i][i])) 
            {
                largest = nums[i][i];
            }
            if (nums[i][n - 1 - i] > largest && isPrime(nums[i][n - 1 - i])) 
            {
                largest = nums[i][n - 1 - i];
            }
        }
        return largest;
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