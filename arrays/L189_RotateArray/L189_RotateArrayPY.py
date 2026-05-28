from typing import List

class Solution:
    def rotate(self, nums: List[int], k: int) -> None:
        n = len(nums)
        k %= n
        
        nums.reverse()
        nums[:k] = reversed(nums[:k])
        nums[k:] = reversed(nums[k:])

sol = Solution()
a = [1,2,3,4,5,6,7]
k = 3
sol.rotate(a,k)
for num in a:
    print(num,end=" ")