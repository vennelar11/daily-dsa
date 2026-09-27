#reverseWordsInAString

class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string word, answer = "";
        while (ss >> word)
        {
            reverse(word.begin(), word.end());
            if (answer.empty())
            {
                answer += word;
            }
            else
            {
                answer += " " + word;
            }
        }
        return answer;
    }
};