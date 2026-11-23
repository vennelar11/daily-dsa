#primeNumberOfSetBits

class Solution {
public:
    int countPrimeSetBits(int left, int right) {
        int count = 0;
        for (int i = left; i <= right; i++)
        {
            if (isPrime(binCount(i)))
            {
                count++;
            }
        }
        return count;
    }
    int binCount(int n)
    {
        int c = 0;
        while (n != 0)
        {
            int rem = n % 2;
            if (rem == 1)
            {
                c++;
            }
            n /= 2;
        }
        return c;
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