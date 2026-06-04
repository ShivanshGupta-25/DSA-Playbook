#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int i = nums.size() - 1;
        while (i > 0 && nums[i-1] >= nums[i]) {
            i--;
        }
        
        if (i == 0) {
            reverse(nums.begin(), nums.end());
            return;
        }
        
        int j = nums.size() - 1;
        while (j >= i && nums[j] <= nums[i-1]) {
            j--;
        }
        
        swap(nums[i-1], nums[j]);
        reverse(nums.begin() + i, nums.end());        
    }
};

int main() {
    // int n;
    // cin >> n;
    // vector<int> nums(n);
    // for (int i = 0; i < n; i++) {
    //     cin >> nums[i];
    // }
    vector<int> nums = {1,2,3};
    int n = nums.size();
    Solution obj;
    obj.nextPermutation(nums);
    for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
    return 0;
}