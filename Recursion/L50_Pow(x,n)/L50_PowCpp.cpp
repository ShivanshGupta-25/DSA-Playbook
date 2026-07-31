#include<iostream>
using namespace std;

class Solution {
public:
    double Pow(double x, long long n) {
        if (n == 0)
            return 1;

        double half = Pow(x, n / 2);

        if (n % 2 == 0)
            return half * half;
        else
            return half * half * x;
    }

    double myPow(double x, int n) {
        long long N = n;

        if (N < 0) {
            x = 1 / x;
            N = -N;
        }

        return Pow(x, N);
    }
};

int main() {
    Solution obj;
    double x = 2.0;
    int n = 10;
    cout << "\nPower of " << x << " to " << n << " is: " << obj.myPow(x, n) << endl;
    x = 2.1;
    n = 3;
    cout << "\nPower of " << x << " to " << n << " is: " << obj.myPow(x, n) << endl;
    x = 2.0;
    n = -2;
    cout << "\nPower of " << x << " to " << n << " is: " << obj.myPow(x, n) << endl;
    return 0;
}