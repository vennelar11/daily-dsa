#validPalindrome

class Solution {
public:
    bool isPalindrome(string s) {
        if (s == " ")
        {
            return true;
        }
        s = toLower(s);
        string original = "";
        for (int i = 0; i < s.length(); i++)
        {
            if (isalnum(s[i]))
            {
                original += s[i];
            }
        }
        string palindrome = "";
        {
            for (int i = s.length() - 1; i >= 0; i--)
            {
                if (isalnum(s[i]))
                {
                    palindrome += s[i];
                }
            }
        }
        if (original == palindrome)
        {
            return true;
        }
        return false;
    }

    string toLower(string word)
    {
        for (char &c : word)
        {
            c = tolower(c);
        }
        return word;
    }
};