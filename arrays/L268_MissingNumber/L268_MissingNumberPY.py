import math
from typing import List

class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        size = len(nums)
        sum = (size*(size+1))/2
        cursum = 0
        for num in nums:
            cursum+=num
        out = sum-cursum
        return int(out)
    
if __name__ == "__main__":
    nums = [3,0,1]
    solution = Solution()
    print(solution.missingNumber(nums)) 