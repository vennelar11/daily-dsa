#checkPangram

class Solution {
public:
    bool checkIfPangram(string sentence) {
        if (sentence.length() < 26)
        {
            return false;
        }
        vector<bool> seen(26, false);
        int count = 0;
        for (char c : sentence)
        {
            int i = c - 'a';
            if (!seen[i])
            {
                seen[i] = true;
                count++;
            }
        }
        return count == 26;
    }
};