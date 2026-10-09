#rearrangeArrayElementsBySign

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        int pos = 0, neg = 1;
        for (int x : nums)
        {
            if (x > 0)
            {
                ans[pos] = x;
                pos += 2;
            }
            else
            {
                ans[neg] = x;
                neg += 2;
            }
        }
        return ans;
    }
};


class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pos, neg, ans;
        for (int x : nums)
        {
            if (x > 0)
            {
                pos.push_back(x);
            }
            else
            {
                neg.push_back(x);
            }
        }
        for (int i = 0; i < pos.size(); i++)
        {
            ans.push_back(pos[i]);
            ans.push_back(neg[i]);
        }
        return ans;
    }
};