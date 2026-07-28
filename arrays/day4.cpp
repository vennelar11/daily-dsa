#findWordsContaining

class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> indices;
        string word;
        for (int i = 0; i < words.size(); i++)
        {
            word = words[i];
            if (word.find(x) != string::npos)
            {
                indices.push_back(i);
            }
        }
        return {indices};
    }
};