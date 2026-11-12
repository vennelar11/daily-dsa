#countMatchingItems

class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int j, count = 0, n = items.size();
        if (ruleKey == "type")
        {
            j = 0;
        }
        else if (ruleKey == "color")
        {
            j = 1;
        }
        else
        {
            j = 2;
        }
        for (int i = 0; i < n; i++)
        {
            if (items[i][j] == ruleValue)
            {
                count++;
            }
        }
        return count;
    }
};