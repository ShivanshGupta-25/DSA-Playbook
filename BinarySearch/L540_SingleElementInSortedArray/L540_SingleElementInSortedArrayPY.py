from typing import List

class Solution:
    def singleNonDuplicate(self, nums: List[int]) -> int:
        start, end = 0, len(nums) - 1

        while start < end:
            mid = start + (end - start) // 2

            # Make mid even
            if mid % 2 == 1:
                mid -= 1

            if nums[mid] == nums[mid + 1]:
                start = mid + 2
            else:
                end = mid

        return nums[start]    

nums = [1, 1, 2, 3, 3, 4, 4, 8, 8]
obj = Solution()
print(obj.singleNonDuplicate(nums))