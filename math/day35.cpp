#countDigitsThatDivideANum

class Solution {
public:
    int countDigits(int num) {
        vector<int> digits;
        int temp = num, dig, count = 0;
        while (temp != 0)
        {
            dig = temp % 10;
            digits.push_back(dig);
            temp = temp / 10;
        }
        for (int i = 0; i < digits.size(); i++)
        {
            if (num % digits[i] == 0)
            {
                count++;
            }
        }
        return count;
    }
};