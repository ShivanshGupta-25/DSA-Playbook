#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int binarySearch(vector<int>& nums, int target, bool searchLeft) {
        int left = 0;
        int right = nums.size() - 1;
        int idx = -1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (nums[mid] > target) {
                right = mid - 1;
            }
            else if (nums[mid] < target) {
                left = mid + 1;
            }
            else {
                idx = mid;

                if (searchLeft) {
                    right = mid - 1;   // Continue searching left half
                }
                else {
                    left = mid + 1;    // Continue searching right half
                }
            }
        }

        return idx;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        int left = binarySearch(nums, target, true);
        int right = binarySearch(nums, target, false);

        return {left, right};
    }
};

int main() {
    vector<int> nums = {5, 7, 7, 8, 8, 10};
    int target = 8;

    Solution obj;
    vector<int> result = obj.searchRange(nums, target);

    cout << result[0] << " " << result[1] << endl;

    return 0;
}