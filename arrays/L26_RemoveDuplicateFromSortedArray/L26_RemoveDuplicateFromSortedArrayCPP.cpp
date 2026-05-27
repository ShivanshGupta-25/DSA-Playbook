#include<iostream>
#include<vector>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    int i = 1, j = 1;
    while (j < nums.size()) {
        if (nums[j] != nums[i - 1]) {
            nums[i] = nums[j];
            i++;
        }
        j++;
    }
    return i;
}

int main() {
    // int n;
    // cin >> n;
    // vector<int> nums(n);
    vector<int> nums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    int n = nums.size();
    // for (int i = 0; i < n; i++) {
    //     cin >> nums[i];
    // }
    int k = removeDuplicates(nums);
    cout << k << endl;
    for (int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }
    return 0;
}