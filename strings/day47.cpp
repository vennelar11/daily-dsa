#reverseDegreeOfAString

class Solution {
public:
    int reverseDegree(string s) {
        int rev, sum = 0;
        for (int i = 0; i < s.length(); i++)
        {
            rev = 'z' - s[i] + 1;
            sum += (i + 1) * rev;
        }
        return sum;
    }
};