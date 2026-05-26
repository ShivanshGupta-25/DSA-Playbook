class Solution:
    def checkRotatedSorted(self, nums):
        n = len(nums)
        count = 0

        for i in range(n):
            if nums[i] > nums[(i + 1) % n]:
                count += 1

        return count <= 1

arr = [3,4,5,1,7,2]
n = len(arr)
sol = Solution()
if sol.checkRotatedSorted(arr):
    print("true")
else:
    print("false")