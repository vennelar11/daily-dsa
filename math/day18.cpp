#selfDividingNumbers

class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> nums;
        for (int i = left; i <= right; i++)
        {
            if (selfDivide(i))
            {
                nums.push_back(i);
            }
        }
        return nums;
    }
    bool selfDivide(int n)
    {
        int temp = n, dig;
        while (temp != 0)
        {
            dig = temp % 10;
            if (dig == 0 || n % dig != 0)
            {
                return false;
            }
            temp = temp / 10;
        }
        return true;
    }
};