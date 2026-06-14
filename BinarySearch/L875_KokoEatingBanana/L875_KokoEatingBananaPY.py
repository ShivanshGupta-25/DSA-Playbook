from typing import List

class Solution:
    def minEatingSpeed(self, piles, h):
        left = 1
        right = max(piles)

        while left < right:
            mid = left + (right - left) // 2

            hours = 0
            for pile in piles:
                hours += (pile + mid - 1) // mid  # ceiling division

            if hours <= h:
                right = mid
            else:
                left = mid + 1

        return left

if __name__ == '__main__':
    piles = [3, 6, 7, 11]
    h = 8
    solution = Solution()
    ans = solution.minEatingSpeed(piles, h)
    print(ans)