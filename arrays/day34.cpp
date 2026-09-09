#degreeOfVertex

class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size();
        vector<int> ans;
        int count;
        for (int i = 0; i < m; i++)
        {
            count = 0;
            for (int j = 0; j < n; j++)
            {
                if (matrix[i][j] == 1)
                {
                    count++;
                }
            }
            ans.push_back(count);
        }
        return ans;
    }
};