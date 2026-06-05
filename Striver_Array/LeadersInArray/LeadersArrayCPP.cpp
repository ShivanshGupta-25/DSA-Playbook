#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> leaders(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans;
        int currleader = arr[n-1];
        ans.push_back(currleader);
        for(int i=n-2; i>=0; i--){
            if(arr[i]>=currleader){
                currleader = arr[i];
                ans.push_back(currleader);
            }
        }
        return ans;
    }
};

int main() {
    // int n;
    // cin>>n;
    // vector<int> arr(n);
    // for(int i=0; i<n; i++){
    //     cin>>arr[i];
    // }
    vector<int> arr = {10, 22, 12, 3, 0, 6};
    Solution obj;
    vector<int> ans = obj.leaders(arr);
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}