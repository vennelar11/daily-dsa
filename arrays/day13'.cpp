#maximumNumberOfWords

class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        vector<int> counts(sentences.size());
        for (int i = 0; i < sentences.size(); i++)
        {
            int count = 1;
            string sentence = sentences[i];
            for (int j = 0; j < sentence.size(); j++)
            {
                if (sentence[j] == ' ')
                {
                    count++;
                }
            }
            counts[i] = count;
        }
        int maximum = counts[0];
        for (int i = 1; i < counts.size(); i++)
        {
            if (counts[i] >= maximum)
            {
                maximum = counts[i];
            }
        }
        return maximum;
    }
};