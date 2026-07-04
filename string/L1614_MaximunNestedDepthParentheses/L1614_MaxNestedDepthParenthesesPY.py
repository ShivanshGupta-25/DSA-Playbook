class Solution:
    def maxDepth(self, s: str) -> int:
        ans = 0
        curr = 0
        for i in s:
            if(i=='('):
                curr+=1
            elif(i==')'):
                curr-=1
            ans = max(ans,curr)
        return ans

a = Solution()
print(a.maxDepth("(1+(2*3)+((8)/4))+1"))
print(a.maxDepth("(1)+((2))+(((3)))"))