#include <iostream>
using namespace std;

class Solution {
    public:
    bool isPalindrome(int x) {
        int n = x;
        int rev = 0;
        while(n > 0) {
            rev = rev * 10 + n % 10;
            n = n / 10;
        }
        return x == rev;
    }
};

int main() {
    Solution obj;
    int x;
    cout << "Enter an integer: ";
    cin >> x;
    if(obj.isPalindrome(x)) {
        cout << x << " is a palindrome number." << endl;
    }
    else {
        cout << x << " is not a palindrome number." << endl;
    }
    return 0;
}