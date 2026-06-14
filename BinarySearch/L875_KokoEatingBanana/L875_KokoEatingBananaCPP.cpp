#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1;
        int right = *max_element(piles.begin(), piles.end());
        
        while (left < right) {
            int mid = left + (right - left) / 2;
            
            long long hours = 0;
            
            for (int pile : piles) {
                hours += (pile + mid - 1) / mid; // ceil division
            }
            
            if (hours <= h) {
                right = mid; // try smaller speed
            } else {
                left = mid + 1; // need more speed
            }
        }
        
        return left;
    }
};

int main(){
    vector<int> piles = {3,6,7,11};
    int h = 8;
    Solution obj;
    int ans = obj.minEatingSpeed(piles, h);
    cout<<ans;
}   