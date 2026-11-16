#theStrongestKValues

class Solution {
public:
    vector<int> getStrongest(vector<int>& arr, int k) {
        sort(arr.begin(), arr.end());
        int n = arr.size();
        int m = arr[(n - 1) / 2];
        int left = 0, right = n - 1;
        vector<int> ans;
        ans.reserve(k);
        while (ans.size() < k)
        {
            int leftDiff = abs(arr[left] - m);
            int rightDiff = abs(arr[right] - m);
            if (rightDiff >= leftDiff)
            {
                ans.push_back(arr[right]);
                right--;
            }
            else
            {
                ans.push_back(arr[left]);
                left++;
            }
        }
        return ans;
    }
};