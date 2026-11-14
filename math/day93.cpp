#beautifulPairs

class Solution {
public:
    int countBeautifulPairs(vector<int>& nums) {
        int count = 0, n = nums.size();
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if(isCoPrime(nums[i], nums[j]))
                {
                    count++;
                }
            }
        }
        return count;
    }
    bool isCoPrime(int n1, int n2)
    {
        while (n1 >= 10)
        {
            n1 = n1 / 10;
        }
        int x = n1;
        if (gcd(x, n2 % 10) == 1)
        {
            return true;
        }
        return false;
    }
};