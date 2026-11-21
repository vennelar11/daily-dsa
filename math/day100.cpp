#removeZeroesInDecimalRepresentation

class Solution {
public:
    long long removeZeros(long long n) {
        if (n == 0)
        {
            return 0;
        }
        string temp = "";
        string number = to_string(n);
        for (int i = 0; i < number.length(); i++)
        {
            if (number[i] != '0')
            {
                temp += number[i];
            }
        }
        long long num = stoll(temp);
        return num;
    }
};