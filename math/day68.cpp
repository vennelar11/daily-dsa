#numberOf1Bits

class Solution {
public:
    int hammingWeight(int n) {
        int b, count = 0;
        while (n > 0)
        {
            b = n % 2;
            if (b == 1)
            {
                count++;
            }
            n /= 2;
        }
        return count;
    }
};