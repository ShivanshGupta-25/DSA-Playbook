class Solution:
    def singleNumber(self, nums):
        nums.sort()

        for i in range(1, len(nums), 2):
            if nums[i] != nums[i - 1]:
                return nums[i - 1]

        return nums[-1]


# Custom Test Case
nums = [2, 2, 1]

sol = Solution()

print("Single Number:", sol.singleNumber(nums))