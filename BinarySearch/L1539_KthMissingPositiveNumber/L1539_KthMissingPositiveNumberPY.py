from typing import List

class Solution:
    def findKthPositive(self, arr: List[int], k: int) -> int:
        left, right = 0, len(arr)

        while left < right:
            mid = (left + right) // 2

            missing = arr[mid] - (mid + 1)

            if missing < k:
                left = mid + 1
            else:
                right = mid

        return left + k
    
if __name__ == "__main__":
    solution = Solution()
    arr = [2,3,4,7,11]
    k = 5
    print(solution.findKthPositive(arr, k))