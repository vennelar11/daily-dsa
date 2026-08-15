#kidsWithMoreCandies

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> maxCandies(candies.size());
        int max = candies[0];
        for (int i = 1; i < candies.size(); i++)
        {
            if (candies[i] > max)
            {
                max = candies[i];
            }
        }
        for (int i = 0; i < candies.size(); i++)
        {
            candies[i] += extraCandies;
            bool isMax = false;
            if (candies[i] >= max)
            {
                isMax = true;
            }
            maxCandies[i] = isMax;
        }
        return maxCandies;
    }
};