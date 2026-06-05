from typing import List

class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        if not nums:
            return 0
        
        nums.sort()
        ans = 1
        currans = 1
        for i in range(1, len(nums)):
            if nums[i] == nums[i-1]:
                continue
            elif nums[i] == nums[i-1] + 1:
                currans += 1
            else:
                ans = max(ans, currans)
                currans = 1
        return max(ans, currans)

nums = [100, 4, 200, 1, 3, 2]
obj = Solution()
ans = obj.longestConsecutive(nums)    
print(ans)