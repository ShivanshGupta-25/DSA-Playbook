class Solution:
    def rotateString(self, s: str, goal: str) -> bool:
        return len(s) == len(goal) and goal in (s + s)
    
a = "abcde"
goal = "cdeab"
sol = Solution()
print(sol.rotateString(a,goal))