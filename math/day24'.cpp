#gcdOfOdd&EvenSums

class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int sumEven = n * (n + 1), sumOdd = n * n;
        return gcd(sumOdd, sumEven);
    }
    int gcd(int a, int b)
    {
        if (b == 0)
        {
            return a;
        }
        return gcd (b, a % b);
    }
};