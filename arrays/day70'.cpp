#richestCustomerWealth

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int m = accounts.size(), n = accounts[0].size();
        int wealth, maxWealth = 0;
        for (int i = 0; i < m; i++)
        {
            wealth = 0;
            for (int j = 0; j < n; j++)
            {
                wealth += accounts[i][j];
            }
            if (wealth > maxWealth)
            {
                maxWealth = wealth;
            }
        }
        return maxWealth;
    }
};