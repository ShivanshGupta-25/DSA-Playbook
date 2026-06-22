#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int splitArray(vector<int>& nums, int k) {
    int low = *max_element(nums.begin(), nums.end());
    int high = 0;

    for (int num : nums) {
        high += num;
    }

    while (low < high) {
        int mid = (low + high) / 2;

        int parts = 1;
        int curr = 0;

        for (int num : nums) {
            if (curr + num > mid) {
                parts++;
                curr = num;
            }
            else {
                curr += num;
            }
        }

        if (parts <= k) {
            high = mid;
        }
        else {
            low = mid + 1;
        }
    }

    return low;
}

int main() {
    vector<int> nums = {7,2,5,10,8};
    int k = 2;
    cout << splitArray(nums, k);
    return 0;
}