#findTheDistanceValueBetweenTwoArrays

class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int count = 0;
        for (int x : arr1)
        {
            if (lessThanD(arr1, arr2, x, d))
            {
                count++;
            }
        }
        return count;
    }
    bool lessThanD(vector<int>& arr1, vector<int>& arr2, int i, int d) {
        for (int x : arr2)
        {
            if (abs(i - x) <= d)
            {
                return false;
            }
        }
        return true;
    }
};