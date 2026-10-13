#replaceDigitsWithCharacters

class Solution {
public:
    string replaceDigits(string s) {
        for (int i = 0; i < s.length(); i++)
        {
            if(!isalpha(s[i]))
            {
                s[i] = shift(s[i - 1], s[i] - '0');
            }
        }
        return s;
    }
    char shift(char c, char x)
    {
        return c + x;
    }
};