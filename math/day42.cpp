#sumAndMultiply

class Solution {
public:
    long long sumAndMultiply(int n) {
        if (n == 0)
        {
            return 0;
        }
        int dig, sum = 0;
        string x = "";
        while (n != 0)
        {
            dig = n % 10;
            if (dig != 0)
            {
                sum += dig;
                x += to_string(dig);
            }
            n = n / 10;
        }
        reverse(x.begin(), x.end());
        int y = stoi(x);
        long long prod = (long long)y * sum;
        return prod;
    }
};