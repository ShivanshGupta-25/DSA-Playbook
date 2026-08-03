class Solution:
    def generate(self, ans, s, open, close, n):
        if open == n and close == n:
            ans.append(s)
            return
        if open > close:
            self.generate(ans, s + ")", open, close + 1, n)
        if open < n:
            self.generate(ans, s + "(", open + 1, close, n)

num = 3
a = Solution()
ans = []
a.generate(ans, "", 0, 0, num)
print(ans)