#smallestEvenMultiple

class Solution {
public:
    int smallestEvenMultiple(int n) {
        if (n % 2 == 0)
        {
            return n;
        }
        return n * 2;
    }
};

class Solution {
public:
    int smallestEvenMultiple(int n) {
        return (n % 2 == 0) ? n : n * 2;
    }
};