#twoSneakyNumbers

class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = 0; j < nums.size(); j++)
            {
                if (i == j)
                {
                    continue;
                }
                if (nums[i] == nums[j])
                {
                    ans.push_back(nums[i]);
                }
            }
        }
        sort(ans.begin(), ans.end());
        ans.erase(unique(ans.begin(), ans.end()), ans.end());
        return ans;
    }
};


class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int> ans;
        vector<int> count(nums.size(), 0);
        for (int i = 0; i < nums.size(); i++)
        {
            int num = nums[i];
            count[num]++;
            if (count[num] == 2)
            {
                ans.push_back(num);
            }
        }
        return ans;
    }
};