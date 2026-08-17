#reverseStringPrefix

class Solution {
public:
    string reversePrefix(string s, int k) {
        string rev;
        for (int i = k - 1; i >= 0; i--)
        {
            rev += s[i];
        }
        for (int i = 0; i < k; i++)
        {
            s[i] = rev[i];
        }
        return s;
    }
};