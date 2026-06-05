#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;

        sort(nums.begin(), nums.end());

        int ans = 1;
        int currans = 1;

        for(int i = 1; i < nums.size(); i++) {
            if(nums[i] == nums[i-1]) {
                continue; // skip duplicates
            }
            else if(nums[i] == nums[i-1] + 1) {
                currans++;
            }
            else {
                ans = max(ans, currans);
                currans = 1;
            }
        }

        return max(ans, currans);
    }
};

int main() {
    vector<int> nums = {100, 4, 200, 1, 3, 2};

    Solution obj;
    cout << obj.longestConsecutive(nums) << endl;

    return 0;
}