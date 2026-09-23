#sumOfPrimesInRange

class Solution {
public:
    int sumOfPrimesInRange(int n) {
        int sum = 0;
        int reverse = reverseNum(n);
        int low = min(n, reverse);
        int high = max(n, reverse);
        for (int i = low; i <= high; i++)
        {
            if (isPrime(i))
            {
                sum += i;
            }
        }
        return sum;
    }
    bool isPrime(int num)
    {
        if (num < 2)
        {
            return false;
        }
        for (int i = 2; i * i <= num; i++)
        {
            if (num % i == 0)
            {
                return false;
            }
        }
        return true;
    }
    int reverseNum(int x)
    {
        int rem, rev = 0;
        while (x != 0)
        {
            rem = x % 10;
            rev = rev * 10 + rem;
            x = x / 10;
        }
        return rev;
    }
};