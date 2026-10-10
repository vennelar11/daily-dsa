#arrangeCoins

class Solution {
public:
    int arrangeCoins(int n) {
        int coins = n;
        for (int i = 1; i <= n; i++)
        {
            coins -= i;
            if (coins < i + 1)
            {
                return i;
            }
        }
        return 0;
    }
};