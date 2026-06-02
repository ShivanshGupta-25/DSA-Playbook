from typing import List

class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        ele = nums[0]
        count = 1
        i = 1
        while i<len(nums):
            if nums[i] == ele:
                count+=1
            elif nums[i]!=ele and count > 0:
                count-=1
            else:
                ele = nums[i]
            i+=1
        return ele
    
nums = [3,2,3]
sol = Solution()
print(sol.majorityElement(nums))