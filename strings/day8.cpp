#reversePrefix

class Solution {
public:
    string reversePrefix(string word, char ch) {
        int i, index;
        string reversed_part = "", original_part = "", new_word = "";
        if (word.find(ch) != string::npos)
        {
            for (i = 0; i < word.length(); i++)
            {
                if (word[i] == ch)
                {
                    index = i;
                    break;
                }
            }
            for (i = 0; i <= index; i++)
            {
                reversed_part += word[i];
            }
            std::reverse(reversed_part.begin(), reversed_part.end());
            for (i = index + 1; i < word.length(); i++)
            {
                original_part += word[i];
            }
            new_word += reversed_part;
            new_word += original_part;
            return new_word;
        }
        else
        {
            return word;
        }  
    }
};