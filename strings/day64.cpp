#sortingTheSentence

class Solution {
public:
    string sortSentence(string s) {
        vector<string> words;
        stringstream ss(s);
        string word;
        while (ss >> word)
        {
            words.push_back(word);
        }
        sortString(words);
        string ans = "";
        int len;
        for (int i = 0; i < words.size(); i++)
        {
            len = words[i].length();
            ans += words[i].substr(0, len - 1);
            if (i != words.size() - 1)
            {
                ans += " ";
            }
        }
        return ans;
    }
    vector<string> sortString(vector<string>& words)
    {
        for (int i = 0; i < words.size() - 1; i++)
        {
            for (int j = 0; j < words.size() - i - 1; j++)
            {
                int n1 = words[j].length() - 1;
                int n2 = words[j + 1].length() - 1;
                if (words[j][n1] - '0' > words[j + 1][n2] - '0')
                {
                    swap(words[j], words[j + 1]);
                }
            }
        }
        return words;
    }
};


class Solution {
public:
    string sortSentence(string s) {
        vector<string> words;
        stringstream ss(s);
        string word;
        while (ss >> word)
        {
            words.push_back(word);
        }
        sortString(words);
        string ans = "";
        for (int i = 0; i < words.size(); i++)
        {
            ans += words[i].substr(0, words[i].length() - 1);
            if (i != words.size() - 1)
            {
                ans += " ";
            }
        }
        return ans;
    }
    vector<string> sortString(vector<string>& words)
    {
        for (int i = 0; i < words.size() - 1; i++)
        {
            for (int j = 0; j < words.size() - i - 1; j++)
            {
                if (words[j][words[j].length() - 1] - '0' > words[j + 1][words[j + 1].length() - 1] - '0')
                {
                    swap(words[j], words[j + 1]);
                }
            }
        }
        return words;
    }
};