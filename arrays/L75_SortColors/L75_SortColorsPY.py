from typing import List

class Solution:
    def sortColors(self, nums: List[int]) -> None:
        lo = 0
        hi = len(nums) - 1
        mid = 0
        while mid <= hi:
            if nums[mid] == 0:
                nums[lo], nums[mid] = nums[mid], nums[lo]
                lo += 1
                mid += 1
            elif nums[mid] == 1:
                mid += 1
            else:
                nums[mid], nums[hi] = nums[hi], nums[mid]    
                hi -= 1 

nums = [2,0,2,1,1,0]
sol = Solution()
sol.sortColors(nums)
print("Sorted array is: ",end="")
for i in range(len(nums)):    
    print(nums[i],end=" ")  