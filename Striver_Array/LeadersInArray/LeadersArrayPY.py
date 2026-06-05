from typing import List

class Solution:
    def leaders(self, arr: List[int]) -> List[int]:
        n = len(arr)
        ans = []
        currleader = arr[n-1]
        ans.append(currleader)
        for i in range(n-2, -1, -1):
            if arr[i] >= currleader:
                currleader = arr[i]
                ans.append(currleader)
        return ans

arr = [10, 22, 12, 3, 0, 6]
obj = Solution()
ans = obj.leaders(arr)
print(ans)