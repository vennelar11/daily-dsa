#earliestTimeToFinish

class Solution {
public:
    int earliestTime(vector<vector<int>>& tasks) {
        int m = tasks.size();
        int n = tasks[0].size();
        int time;
        int least = INT_MAX;
        for (int i = 0; i < m; i++)
        {
            time = 0;
            for (int j = 0; j < n; j++)
            {
                time += tasks[i][j];
            }
            least = min(least, time);
        }
        return least;
    }
};

class Solution {
public:
    int earliestTime(vector<vector<int>>& tasks) {
        vector<int> times;
        int m = tasks.size();
        int n = tasks[0].size();
        int time;
        for (int i = 0; i < m; i++)
        {
            time = 0;
            for (int j = 0; j < n; j++)
            {
                time += tasks[i][j];
            }
            times.push_back(time);
        }
        int least = times[0];
        for (int i = 1; i < times.size(); i++)
        {
            if (times[i] < least)
            {
                least = times[i];
            }
        }
        return least;
    }
};