#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) { 
        sort(nums.begin(), nums.end());

        for (int i = 1; i < nums.size(); i += 2) {
            if (nums[i] != nums[i - 1]) {
                return nums[i - 1];
            }
        }

        return nums[nums.size() - 1];
    }
};

int main() {
    vector<int> nums = {2, 2, 1};

    Solution sol;

    cout << "Single Number: " << sol.singleNumber(nums) << endl;

    return 0;
}