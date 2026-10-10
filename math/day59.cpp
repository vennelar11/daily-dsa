#findThePivotInteger

class Solution {
public:
    int pivotInteger(int n) {
        int totalSum = n * (n + 1) / 2;
        int x = sqrt(totalSum);
        if (x * x == totalSum)
        {
            return x;
        }
        return -1;
    }
};

class Solution {
public:
    int pivotInteger(int n) {
        if (n == 1)
        {
            return 1;
        }
        for (int i = 1; i < n; i++)
        {
            if (sumInt(1, i) == sumInt(i, n))
            {
                return i;
            }
        }
        return -1;
    }
    int sumInt(int low, int high)
    {
        int sum = 0;
        while (low <= high)
        {
            sum += low;
            low++;
        }
        return sum;
    }
};