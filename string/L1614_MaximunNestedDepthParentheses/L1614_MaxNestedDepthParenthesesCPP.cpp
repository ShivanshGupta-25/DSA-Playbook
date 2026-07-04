#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    int maxDepth(string s) {
        int ans = 0;
        int curr = 0;
        
        for (char c : s) {
            if (c == '(') {
                curr++;
            } else if (c == ')') {
                curr--;
            }
            
            ans = max(ans, curr);
        }
        
        return ans;
    }
};

int main(){
    Solution obj;
    cout << obj.maxDepth("(1+(2*3)+((8)/4))+1") << endl;
    cout << obj.maxDepth("(1)+((2))+(((3)))") << endl;
    return 0;
}