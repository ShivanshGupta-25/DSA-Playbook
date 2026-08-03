#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Solution {
public:
    void solve(vector<string> & ans , string & temp , int n , int open , int close) {
        if (temp.size() == 2 * n) {
            ans.push_back(temp);
            return;
        }
        if (open < n) {
            temp.push_back('(');
            solve(ans , temp , n , open + 1 , close);
            temp.pop_back();
        }
        if (close < open) {
            temp.push_back(')');
            solve(ans , temp , n , open , close + 1);
            temp.pop_back();

        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string temp = "";
        solve(ans , temp , n , 0 , 0);
        return ans;
        
    }
};

int main() {
    int n = 3;
    Solution obj;
    vector<string> ans = obj.generateParenthesis(n);
    for (int i = 0 ; i < ans.size() ; i++) {
        cout << ans[i] << endl;
    }
    return 0;
}