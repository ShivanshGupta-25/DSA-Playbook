#include<iostream>
#include<string>
#include<climits>
using namespace std;

class Solution {
public:
    int myAtoi(string s) {
        int i = 0, n = s.size();

        // Skip leading spaces
        while (i < n && s[i] == ' ')
            i++;

        // Sign
        int sign = 1;
        if (i < n && (s[i] == '+' || s[i] == '-')) {
            if (s[i] == '-')
                sign = -1;
            i++;
        }

        long long num = 0;

        while (i < n && isdigit(s[i])) {
            num = num * 10 + (s[i] - '0');

            if (sign == 1 && num > INT_MAX)
                return INT_MAX;
            if (sign == -1 && -num < INT_MIN)
                return INT_MIN;

            i++;
        }

        return sign * num;
    }
};


int main()
{
    Solution myAtoi;
    cout << myAtoi.myAtoi("42") << endl;
    cout << myAtoi.myAtoi("   -42") << endl;
    cout << myAtoi.myAtoi("4193 with words") << endl;
    cout << myAtoi.myAtoi("words and 987") << endl;
    cout << myAtoi.myAtoi("-91283472332") << endl;
    cout << myAtoi.myAtoi("91283472332") << endl;
    return 0;    
}