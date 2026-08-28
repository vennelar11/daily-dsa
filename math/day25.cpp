#subtractProd&SumOfDigits

class Solution {
public:
    int subtractProductAndSum(int n) {
        int temp = n, sum = 0, prod = 1, dig;
        while (temp != 0)
        {
            dig = temp % 10;
            sum += dig;
            prod *= dig;
            temp = temp / 10;
        }
        return prod - sum;
    }
};