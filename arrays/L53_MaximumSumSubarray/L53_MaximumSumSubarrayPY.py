from typing import List

class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        if(len(nums)==1): return nums[0]
        sum = float('-inf')
        temp = 0
        for i in nums:
            temp+=i
            if(temp > sum):
                sum = temp
            if(temp<0):
                temp=0
        return sum

nums = [-2,1,-3,4,-1,2,1,-5,4]
print(Solution().maxSubArray(nums))