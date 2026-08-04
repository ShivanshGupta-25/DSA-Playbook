from typing import List

class Solution:
    def combinationSum(self, candidates: List[int], target: int) -> List[List[int]]:
        ans = []
        path = []

        def backtrack(index, remaining):
            # Found a valid combination
            if remaining == 0:
                ans.append(path[:])
                return

            # Invalid case
            if index == len(candidates) or remaining < 0:
                return

            # Include the current candidate
            path.append(candidates[index])
            backtrack(index, remaining - candidates[index])  # Stay at same index
            path.pop()

            # Exclude the current candidate
            backtrack(index + 1, remaining)

        backtrack(0, target)
        return ans

candidates = [2,3,6,7]
target = 7
ans = Solution().combinationSum(candidates, target)
for i in ans:
    print(i)