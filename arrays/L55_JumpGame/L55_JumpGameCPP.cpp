#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int goal = nums.size() - 1;

        for (int i = nums.size() - 2; i >= 0; i--) {
            if (i + nums[i] >= goal) {
                goal = i;
            }
        }

        return goal == 0;
    }
};

// Function to print vector
void printVector(vector<int>& nums) {
    cout << "[ ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << "]";
}

int main() {
    Solution obj;

    vector<int> nums1 = {2, 3, 1, 1, 4};
    cout << "Input: ";
    printVector(nums1);
    cout << endl;

    cout << "Can reach end: "<< (obj.canJump(nums1) ? "true" : "false") << endl;

    vector<int> nums2 = {3, 2, 1, 0, 4};
    cout << "\nInput: ";
    printVector(nums2);
    cout << endl;

    cout << "Can reach end: "<< (obj.canJump(nums2) ? "true" : "false") << endl;

    return 0;
}