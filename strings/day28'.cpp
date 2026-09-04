#checkIfAWordOccursAsAPrefix

class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        int n = searchWord.size();
        vector<string> words;
        stringstream ss(sentence);
        string word;
        while (ss >> word)
        {
            words.push_back(word);
        }
        for(int i = 0; i < words.size(); i++)
        {
            if (words[i].substr(0, n) == searchWord)
            {
                return i + 1;
            }
        }
        return -1;
    }
};