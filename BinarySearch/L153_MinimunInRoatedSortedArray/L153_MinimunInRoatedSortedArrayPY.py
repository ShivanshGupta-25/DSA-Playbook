from typing import List

class Solution:
    def findMin(self, nums: List[int]) -> int:
        start, end = 0, len(nums) - 1
        while start < end:
            mid = start + (end - start) // 2
            if nums[mid] > nums[end]:
                start = mid + 1
            else:
                end = mid
        return nums[start]

nums = [3, 4, 5, 1, 2]
obj = Solution()
print(obj.findMin(nums))