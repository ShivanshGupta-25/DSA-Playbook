#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int size = nums.size();
        int sum = (size*(size+1))/2;
        int cursum = 0;
        for(int i = 0;i<nums.size();i++){
            cursum+=nums[i];
        }
        int out = sum-cursum;
        return out;
    }
};

int main(){
    vector<int> nums = {3,0,1};
    Solution obj;
    cout<<obj.missingNumber(nums);
    return 0;   
}