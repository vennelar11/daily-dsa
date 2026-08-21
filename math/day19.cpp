#fibonacciNumber

class Solution {
public:
    int fib(int n) {
       return fibonacci(n);
    }
    int fibonacci(int f)
    {
        if (f == 0)
        {
            return 0;
        }
        else if (f == 1)
        {
            return 1;
        }
        return fibonacci(f - 1) + fibonacci(f - 2);
    }
};