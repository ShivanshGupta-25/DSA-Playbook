#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
    int majorityElement(vector<int>& nums) {
        int i = 1;
        int element = nums[0];
        int count = 1;
        while(i<nums.size()){
            if(nums[i]==element)    count+=1;
            else if(nums[i] != element && count>0)  count-=1;
            else if(nums[i] != element && count == 0)   element = nums[i];
            i+=1;
        }
        return element;
    }
};

int main(){
    vector<int> nums = {3,2,3};
    Solution sol;
    cout<<sol.majorityElement(nums)<<endl;
    return 0;
}