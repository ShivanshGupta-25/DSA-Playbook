#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m, j = 0;
        while(i<m+n){
            if(j<n && nums2[j]<nums1[i]){
                nums1[i] = nums2[j];
                j++;
            }else{
                nums1[i] = nums1[i-n];
                i++;
            }
        }
        sort(nums1.begin(), nums1.end());
        return nums1;

    }
};

int main(){
    int n = 3;
    vector<int> nums1 = {1,2,3,0,0,0};
    int m = 3;
    vector<int> nums2 = {2,5,6};
    Solution obj;
    vector<int> ans = obj.merge(nums1, m, nums2, n);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}