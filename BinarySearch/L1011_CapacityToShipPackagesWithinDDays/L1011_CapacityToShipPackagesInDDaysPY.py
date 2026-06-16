from typing import List

class Solution:
    def shipWithinDays(self, weights: list[int], days: int) -> int:
        low = max(weights)
        high = sum(weights)

        ans = high

        while low <= high:
            mid = low + (high - low) // 2

            curr_days = 1
            curr_weight = 0

            for w in weights:
                if curr_weight + w <= mid:
                    curr_weight += w
                else:
                    curr_days += 1
                    curr_weight = w

            if curr_days <= days:
                ans = mid
                high = mid - 1
            else:
                low = mid + 1

        return ans
    
sol = Solution()
print(sol.shipWithinDays([1,2,3,4,5,6,7,8,9,10], 5))