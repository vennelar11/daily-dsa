#findTheHighestAltitude

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> alts;
        int height = 0;
        for (int i = 0; i < gain.size(); i++)
        {
            height += gain[i];
            alts.push_back(height);
        }
        int highest = alts[0];
        for (int i = 1; i < alts.size(); i++)
        {
            if (alts[i] >= highest)
            {
                highest = alts[i];
            }
        }
        if (highest < 0)
        {
            return 0;
        }
        return highest;
    }
};

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int max_height = 0, current_height = 0;
        for (int i = 0; i < gain.size(); i++)
        {
            current_height += gain[i];
            max_height = max(current_height, max_height);
        }
        return max_height;
    }
};

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int max_height = 0, current_height = 0;
        for (int g : gain)
        {
            current_height += g;
            max_height = max(current_height, max_height);
        }
        return max_height;
    }
};