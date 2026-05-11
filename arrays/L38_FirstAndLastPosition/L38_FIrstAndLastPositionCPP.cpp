#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int low=0,high=n-1;
        int first=-1;
        while(low<=high){
            int mid = low+(high-low)/2;
            if(nums[mid]>=target){
                high=mid-1;
                if(nums[mid]==target) first=mid;
            }else low=mid+1;
        }
        low=0,high=n-1;
        int second=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]<=target){
                low=mid+1;
                if(nums[mid]==target) second = mid;
            }else{
                high=mid-1;
            }
        }
        return {first,second};
    }
};

int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++) cin>>nums[i];
    int target;
    cin>>target;
    Solution ob;
    vector<int> ans = ob.searchRange(nums, target);
    cout<<ans[0]<<" "<<ans[1]<<endl;
    return 0;
}