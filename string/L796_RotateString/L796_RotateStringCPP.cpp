#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    bool rotateString(string s, string goal) {
        return s.length() == goal.length() && (s + s).find(goal) != string::npos;
    }
};

int main() {
    string s = "abcde";
    string goal = "cdeab";
    Solution obj;
    cout << obj.rotateString(s, goal);
    return 0;
}