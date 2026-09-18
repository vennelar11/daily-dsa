#validDigitNumber

class Solution {
public:
    bool validDigit(int n, int x) {
        bool isValid = false;
        int dig;
        while (n != 0)
        {
            dig = n % 10;
            if (dig == x)
            {
                isValid = true;
            }
            n = n / 10;
        }
        if (dig == x)
        {
            isValid = false;
        }
        return isValid;
    }
};