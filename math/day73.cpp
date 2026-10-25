#digitFrequencyScore

class Solution {
public:
    int digitFrequencyScore(int n) {
        int dig, sum = 0;
        while (n != 0)
        {
            dig = n % 10;
            sum += dig;
            n = n / 10;
        }
        return sum;
    }
};