#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size(); i++) {
            if (i > 0 && nums[i] == nums[i-1]) {
                continue;
            }
            
            int j = i + 1;
            int k = nums.size() - 1;

            while (j < k) {
                int total = nums[i] + nums[j] + nums[k];

                if (total > 0) {
                    k--;
                } else if (total < 0) {
                    j++;
                } else {
                    res.push_back({nums[i], nums[j], nums[k]});
                    j++;

                    while (nums[j] == nums[j-1] && j < k) {
                        j++;
                    }
                }
            }
        }
        return res;        
    }
};

int main() {
    int arr[] = {-1,0,1,2,-1,-4};
    vector<int> nums(arr, arr + sizeof(arr) / sizeof(int));
    Solution obj;
    vector<vector<int>> res = obj.threeSum(nums);
    for (auto x : res) {
        cout << "[" << x[0] << ", " << x[1] << ", " << x[2] << "]" << endl;
    }
    return 0;
}