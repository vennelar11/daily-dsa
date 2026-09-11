#countIntegersWithEvenDigitSum

class Solution {
public:
    int countEven(int num) 
    {
        int count = 0;
        for (int i = 1; i <= num; i++)
        {
            if (digSum(i) % 2 == 0)
            {
                count++;
            }
        }
        return count;
    }
    int digSum(int n)
    {
        int sum = 0, dig;
        while (n != 0)
        {
            dig = n % 10;
            sum += dig;
            n = n / 10;
        }
        return sum;
    }
};