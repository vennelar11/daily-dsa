#checkBalancedString

class Solution {
public:
    bool isBalanced(string num) {
        int evenSum = 0, oddSum = 0, dig;
        for (int i = 0; i < num.size(); i++)
        {
            if (i % 2 != 0)
            {
                dig = num[i] - '0';
                oddSum += dig;
            }
            else
            {
                dig = num[i] - '0';
                evenSum += dig;
            }
        }
        if (evenSum == oddSum)
        {
            return true;
        }
        return false;
    }
};