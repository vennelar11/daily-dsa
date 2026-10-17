#checkFrequency

class Solution {
public:
    bool areOccurrencesEqual(string s) {
        vector<int> counts;
        int count;
        for (int i = 0; i < s.length(); i++)
        {
            count = 0;
            for(int j = 0; j < s.length(); j++)
            {
                if (s[i] == s[j])
                {
                    count++;
                }
            }
            counts.push_back(count);
        }
        for(int i = 0; i < s.length() - 1; i++)
        {
            if (counts[i] != counts[i + 1])
            {
                return false;
            }
        }
        return true;
    }
};