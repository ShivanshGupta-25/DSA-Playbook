#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int left = 1;
        int right = *max_element(nums.begin(), nums.end());
        
        while (left <= right) {
            int mid = left + (right-left)/2;
            int curr = 0;
            
            for (int num : nums) {
                curr += (num + mid - 1) / mid;
            }
            
            if (curr<=threshold) {
                right = mid-1;
            } else {
                left = mid+1;
            }
        }
        return left;
    }
};

int main() {
    vector<int> nums = {1,2,5,9};
    int threshold = 6;
    Solution obj;
    int ans = obj.smallestDivisor(nums, threshold);
    cout<<ans;
    return 0;
}