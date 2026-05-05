#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size() - 1; i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] + nums[j] == target) {
                    return {i, j};
                }
            }
        }
        return {}; // if no solution found
    }
};

int main() {
    // int n;
    // cout << "Enter number of elements: ";
    // cin >> n;

    // vector<int> nums(n);
    // cout << "Enter elements: ";
    // for (int i = 0; i < n; i++) {
    //     cin >> nums[i];
    // }

    // int target;
    // cout << "Enter target: ";
    // cin >> target;

    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    Solution sol;
    vector<int> result = sol.twoSum(nums, target);

    if (!result.empty()) {
        cout << "Output: [" << result[0] << ", " << result[1] << "]" << endl;
    } else {
        cout << "No solution found" << endl;
    }

    return 0;
}