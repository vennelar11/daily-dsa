#palindromeNumber

class Solution {
public:
    bool isPalindrome(int x) {
        string word = to_string(x);
        string rev;
        int n = word.size();
        for (int i = n - 1; i >= 0; i--)
        {
            rev += word[i];
        }
        if (word == rev)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};