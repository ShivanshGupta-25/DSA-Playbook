#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// class Solution {
// public:
//     int shipWithinDays(vector<int>& weights, int days) {
//         int low = *max_element(weights.begin(),weights.end());
//         int high = 0;
//         for(int i = 0;i<weights.size();i++){
//             high+=weights[i];
//         }
//         int ans = high;
//         while(low<=high){
//             int mid = low + (high-low)/2;
//             int currdays = 1;
//             int currweight = 0;
//             int i = 0;
//             while(i<weights.size()){
//                 if(currweight + weights[i] <= mid){
//                     currweight+=weights[i];
//                     i+=1;
//                 }
//                 else{
//                     currdays+=1;
//                     currweight = weights[i];
//                     i+=1;
//                 }
//             } 
//             if(currdays<=days){
//                 if(ans>mid) ans = mid;
//                 high = mid-1;
//             }
//             else{
//                 low = mid+1;
//             }
//         }
//         return ans;
//     }
// };

class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(), weights.end());
        int high = 0;

        for (int w : weights) {
            high += w;
        }

        int ans = high;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            int currdays = 1;
            int currweight = 0;

            for (int w : weights) {
                if (currweight + w <= mid) {
                    currweight += w;
                } else {
                    currdays++;
                    currweight = w;
                }
            }

            if (currdays <= days) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return ans;
    }
};

int main(){
    Solution obj;
    vector<int> weights = {1,2,3,4,5,6,7,8,9,10};
    int days = 5;
    cout<<obj.shipWithinDays(weights,days)<<endl;
    return 0;
}