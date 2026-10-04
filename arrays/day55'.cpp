#flippingAnImage

class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int m = image.size(), n = image[0].size();
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n / 2; j++)
            {
                swap(image[i][j], image[i][n - 1 - j]);
            }
        }
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (image[i][j] == 1)
                {
                    image[i][j] = 0;
                }
                else
                {
                    image[i][j] = 1;
                }
            }
        }
        return image;
    }
};