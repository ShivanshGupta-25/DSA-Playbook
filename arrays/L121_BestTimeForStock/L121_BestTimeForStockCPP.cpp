#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = prices[0];
        int maxProfit = 0;

        for (int price : prices) {
            if (price < minPrice) {
                minPrice = price;
            } else {
                int profit = price - minPrice;
                maxProfit = max(maxProfit, profit);
            }
        }

        return maxProfit;
    }
};

int main() {
    // int n;
    // cin>>n;
    // vector<int> prices(n);
    // for(int i=0; i<n; i++) cin>>prices[i];
    vector<int> prices = {7,1,5,3,6,4};
    Solution obj;
    cout<<obj.maxProfit(prices)<<endl;
    return 0;
}