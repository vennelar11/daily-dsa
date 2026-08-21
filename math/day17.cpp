#harshadNumber

class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int num = x, sum = 0, dig;
        while (num != 0)
        {
            dig = num % 10;
            sum += dig;
            num = num / 10;
        }
        if (x % sum == 0)
        {
            return sum;
        }
        return -1;
    }
};