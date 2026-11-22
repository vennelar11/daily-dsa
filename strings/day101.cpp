#checkIfAllAsAppearBeforeBs

class Solution {
public:
    bool checkString(string s) {
        if (s.find('a') == string::npos)
        {
            return true;
        }
        for (int i = 1; i < s.length(); i++)
        {
            if (s[i - 1] == 'b' && s[i] == 'a')
            {
                return false;
            }
        }
        return true;
    }
};