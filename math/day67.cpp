#convertDateToBinary

class Solution {
public:
    string convertDateToBinary(string date) {
        int year = stoi(date.substr(0, 4));
        int mon = stoi(date.substr(5, 2));
        int day = stoi(date.substr(8, 2));
        string ans = toBinary(year) + "-" + toBinary(mon) + "-" + toBinary(day);
        return ans;
    }
    string toBinary(int n)
    {
        string b = "";
        while (n > 0)
        {
            b += to_string(n % 2);
            n /= 2;
        }
        reverse(b.begin(), b.end());
        return b;
    }
};