#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
    int LongestSubarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        int left=0,right=0;
        int sum = nums[0];
        int maxlen = 0;
        while(right<n){
            while(left<=right && sum>k){
                sum-=nums[left];
                left++;
            }
            if(sum==k){
                maxlen = max(maxlen, right-left + 1);
            }
            right++;
            if(right<n) sum+=nums[right];
        }
        return maxlen; 
    }
};

int main(){
    // int k,n;
    // cout<<"Enter size of array"<<endl;
    // cin>>n;
    // cout<<"Enter sum"<<endl;
    // cin>>k;
    // vector<int> nums(n);
    // cout<<"Enter array elements"<<endl;
    // for(int i=0;i<n;i++){
    //     cin>>nums[i];
    // }
    int k = 15,n=6;
    vector<int> nums = {10,5,2,7,1,9};
    Solution obj;
    cout<<obj.LongestSubarraySum(nums,k);
    return 0;
}