#findFirstPalindrome

class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        string word;
        for (int i = 0; i < words.size(); i++)
        {
            word = words[i];
            reverse(word.begin(), word.end());
            if (word == words[i])
            {
                return words[i];
            }
        }
        return "";
    }
};