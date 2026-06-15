from typing import List

class Solution:
    def smallestDivisor(self, nums: List[int], threshold: int) -> int:
        ans = 0
        left = 1
        right = max(nums)
        while left <= right:
            mid = left + (right-left)//2
            curr = 0
            for num in nums:
                curr += (num + mid - 1) // mid

            if curr<=threshold:
                # ans = curr
                right = mid-1
            elif curr>threshold:
                left = mid+1
        return left
            

if __name__ == '__main__':
    sol = Solution()
    nums = [1,2,5,9]
    threshold = 6
    print(sol.smallestDivisor(nums, threshold))