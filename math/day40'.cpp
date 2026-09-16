#checkGoodInteger

class Solution {
public:
    bool checkGoodInteger(int n) {
        if ((squareSum(n) - digitSum(n)) >= 50)
        {
            return true;
        }
        return false;
    }
    int digitSum(int n)
    {
        int digit, sum = 0;
        while (n != 0)
        {
            digit = n % 10;
            sum += digit;
            n = n / 10;
        }
        return sum;
    }
    int squareSum(int n)
    {
        int digit, sum = 0;
        while (n != 0)
        {
            digit = n % 10;
            sum += (digit * digit);
            n = n / 10;
        }
        return sum;
    }
};