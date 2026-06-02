#include<iostream>
#include<vector>
using namespace std;

int maxSubArraySum(vector<int> nums) {\
    if(nums.size()==0) return 0;
    int maxSum = nums[0];
    int currSum = nums[0];
    for(int i=1; i<nums.size(); i++) {
        currSum+=nums[i];
        if(currSum>maxSum) maxSum = currSum;
        if(currSum<0) currSum = 0;
    }
    return maxSum;
}

int main() {
    // int n;
    // cin>>n;
    // vector<int> nums(n);
    // for(int i=0; i<n; i++) cin>>nums[i];
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    cout<<maxSubArraySum(nums)<<endl;
    return 0;
}