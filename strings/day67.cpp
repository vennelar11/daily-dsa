#weightedWordMapping

class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        vector<int> results;
        int res;
        for (string w : words)
        {
            res = 0;
            for (int i = 0; i < w.length(); i++)
            {
                int l = w[i] - 'a';
                res += weights[l];
            }
            results.push_back(res % 26);
        }
        string ans = "";
        for (int x : results)
        {
            x = 25 - x;
            ans += static_cast<char>('a' + x);
        }
        return ans;
    }
};