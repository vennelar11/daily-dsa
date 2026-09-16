#maxProdOfTwoDigits

class Solution {
public:
    int maxProduct(int n) {
        vector<int> digit = splitDigits(n);
        int m = digit.size();
        return digit[m - 1] * digit[m - 2];
    }
    vector<int> splitDigits(int n)
    {
        int digit;
        vector<int> digits;
        while (n != 0)
        {
            digit = n % 10;
            digits.push_back(digit);
            n = n / 10;
        }
        sort(digits.begin(), digits.end());
        return digits;
    }
};