#truncateSentence

class Solution {
public:
    string truncateSentence(string s, int k) {
        string truncate;
        int spaces = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == ' ')
            {
                spaces++;
                if (spaces == k)
                {
                    break;
                }
            }
            truncate += s[i];
        }
        return truncate;
    }
};