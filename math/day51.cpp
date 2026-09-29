#sqrt(x)

class Solution {
public:
    int mySqrt(int x) {
        if (x < 2)
        {
            return x;
        }
        int mid, ans, low = 0, high = x;
        while (low <= high)
        {
            mid = (low + high) / 2;
            if (mid == x / mid) //mid * mid == x
            {
                return mid;
            }
            else if (mid > x / mid)
            {
                high = mid - 1;
            }
            else if (mid < x / mid)
            {
                ans = mid;
                low = mid + 1;
            }
        }
        return ans;
    }
};