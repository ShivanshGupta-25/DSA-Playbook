from typing import List

class Solution:
    def canJump(self, nums: List[int]) -> bool:
        goal = len(nums) - 1

        for i in range(len(nums) - 2, -1, -1):
            if i + nums[i] >= goal:
                goal = i
        
        return goal == 0


if __name__ == '__main__':
    sol = Solution()
    
    nums1 = [2, 3, 1, 1, 4]
    print("Input:", nums1)
    print("Can reach end:", sol.canJump(nums1))  # True

    nums2 = [3, 2, 1, 0, 4]
    print("\nInput:", nums2)
    print("Can reach end:", sol.canJump(nums2))  # False