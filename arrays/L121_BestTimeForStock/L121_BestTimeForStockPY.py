from typing import List

class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        minPrice = prices[0]
        maxProfit = 0
        for price in prices:
            if(price<minPrice):
                minPrice = price
            else:
                profit = price - minPrice
                maxProfit = max(maxProfit, profit)
        return maxProfit
    
prices = [7,1,5,3,6,4]
print(Solution().maxProfit(prices))