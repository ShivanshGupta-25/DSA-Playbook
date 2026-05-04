class Solution:
    def searchInsert(self, nums, target):
        for i in range(len(nums)):
            if nums[i] >= target:
                return i
        return len(nums)


if __name__ == "__main__":
    nums = [1, 3, 5, 6]
    target = 5

    sol = Solution()
    result = sol.searchInsert(nums, target)

    print("Insert Position:", result)