#partitionArrayAccordingToPivot

class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> less, equal, more, ans;
        for (int x : nums)
        {
            if (x < pivot)
            {
                less.push_back(x);
            }
            else if (x == pivot)
            {
                equal.push_back(x);
            }
            else
            {
                more.push_back(x);
            }
        }
        for (int x : less)
        {
            ans.push_back(x);
        }
        for (int x : equal)
        {
            ans.push_back(x);
        }
        for (int x : more)
        {
            ans.push_back(x);
        }
        return ans;
    }
};