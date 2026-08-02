#include<iostream>
using namespace std;

class Solution {
public:
    const int MOD = 1e9 + 7;

    long long power(long long base, long long exp) {
        long long result = 1;
        base %= MOD;

        while (exp > 0) {
            if (exp & 1) {               // If exponent is odd
                result = (result * base) % MOD;
            }
            base = (base * base) % MOD;
            exp >>= 1;                   // Divide exponent by 2
        }

        return result;
    }

    int countGoodNumbers(long long n) {
        long long evenPositions = (n + 1) / 2;
        long long oddPositions = n / 2;

        return (power(5, evenPositions) * power(4, oddPositions)) % MOD;
    }
};

int main() {
    Solution obj;
    cout << obj.countGoodNumbers(5) << endl;
    return 0;
}