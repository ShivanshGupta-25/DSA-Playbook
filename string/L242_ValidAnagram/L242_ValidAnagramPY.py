from collections import Counter

class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        return Counter(s) == Counter(t)

a = "anagram"
b = "nagaram"
sol = Solution()
print(sol.isAnagram(a,b))