#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    string removeOuterParentheses(string s) {
        int n = s.size();
        int depth = 0;
        string result;
        
        for (int i = 0; i < n; i++) {
            char ch = s[i];
            if (ch == '(') {
                if (depth > 0)
                    result.push_back(ch);
                depth++;
            }
            else {
                depth--;
                if (depth > 0)
                    result.push_back(ch);
            }
        }
        
        return result;
    }
};

int main(){
    string s = "(()())(())";
    Solution obj;
    cout << obj.removeOuterParentheses(s) << endl;
    return 0;   
}