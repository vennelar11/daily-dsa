#mirrorDistanceOfAnInteger

class Solution {
public:
    int mirrorDistance(int n) {
        return abs(n - rev(n));
    }
    int rev(int num)
    {
        int dig, rev = 0, rem;
        while (num != 0)
        {
            rem = num % 10;
            rev = rev * 10 + rem;
            num = num / 10;
        }
        return rev;
    }
};