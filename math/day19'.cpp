#checkDivbyDigSumAndProd

class Solution {
public:
    bool checkDivisibility(int n) {
        int temp = n, sum = 0, prod = 1, dig;
        while (temp != 0)
        {
            dig = temp % 10;
            sum += dig;
            prod *= dig;
            temp = temp / 10;
        }
        if (n % (sum + prod) == 0)
        {
            return true;
        }
        return false;
    }
};