#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {

        string cleantext = "";

        // Convert to lowercase and remove symbols/spaces
        for(char ch : s) {

            ch = tolower(ch);

            if((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9')) {
                cleantext += ch;
            }
        }

        int lens = cleantext.length();

        // Check palindrome
        for(int i = 0; i < lens / 2; i++) {

            if(cleantext[i] != cleantext[lens - i - 1]) {
                return false;
            }
        }

        return true;
    }
};

int main() {

    Solution obj;

    string s = "A man, a plan, a canal: Panama";

    if(obj.isPalindrome(s))
        cout << "True";
    else
        cout << "False";

    return 0;
}