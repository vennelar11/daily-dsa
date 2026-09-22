#smallestDivisibleDigitProduct

class Solution {
public:
    int smallestNumber(int n, int t) {
        for (int i = n; i < n + 11; i++)
        {
            if (prodOfDig(i) % t == 0)
            {
                return i;
            }
        }
        return 0;
    }
    int prodOfDig(int num)
    {
        int dig, prod = 1;
        while (num != 0)
        {
            dig = num % 10;
            prod *= dig;
            num = num / 10;
        }
        return prod;
    }
};