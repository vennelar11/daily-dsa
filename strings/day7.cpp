#scoreOfString

class Solution {
public:
    int scoreOfString(string s) {
        int sum = 0, difference;
        for (int i = 0; i < s.length()- 1; i++)
        {
            difference = abs((int)s[i] - (int)s[(i+1)]);
            sum += difference;
        }
        return sum;
    }
};