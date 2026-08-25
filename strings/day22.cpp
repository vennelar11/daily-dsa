#stringMatchingInAnArray

class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        vector<string> substring;
        for (int i = 0; i < words.size(); i++)
        {
            for (int j = 0; j < words.size(); j++)
            {
                if (i == j)
                {
                    continue;
                }
                if (words[j].find(words[i]) != string::npos)
                {
                    substring.push_back(words[i]);
                    break;
                }
            }
        }
        return substring;
    }
};