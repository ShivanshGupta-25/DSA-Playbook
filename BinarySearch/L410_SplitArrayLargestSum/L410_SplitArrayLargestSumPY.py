from typing import List

class Solution:
    def splitArray(self, nums: List[int], k: int) -> int:
        low = max(nums)
        high = sum(nums)

        while low < high:
            mid = (low + high) // 2

            parts = 1
            curr = 0

            for num in nums:
                if curr + num > mid:
                    parts += 1
                    curr = num
                else:
                    curr += num

            if parts <= k:
                high = mid
            else:
                low = mid + 1

        return low
    
nums = [7,2,5,10,8]
k = 2
print(Solution().splitArray(nums, k))
