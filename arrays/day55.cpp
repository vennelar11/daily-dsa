#matrixDiagonalSum

class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int m = mat.size(), n = mat[0].size();
        int sum = 0;
        for (int i = 0; i < m; i++)
        {
            sum += mat[i][i];
        }
        for (int i = 0; i < n; i++)
        {
            if (i == n - 1 - i)
            {
                continue;
            }
            sum += mat[i][n - 1 - i];
        }
        return sum;
    }
};