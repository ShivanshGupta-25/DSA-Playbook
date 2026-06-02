#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
    void sortColor(vector<int>& nums){
        int lo = 0;
        int hi=nums.size()-1;
        int mid = 0;
        while(mid<=hi){
            if(nums[mid]==0){
                swap(nums[lo],nums[mid]);
                lo+=1,mid+=1;
            }
            else if(nums[mid]==1){
                mid+=1;
            }
            else{
                swap(nums[mid],nums[hi]);
                hi-=1;
            }
        }
    }
};

int main(){
    Solution sol;
    vector<int> nums = {2,0,2,1,1,0};
    sol.sortColor(nums);
    cout<<"Sorted array is: ";
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}