from typing import List

class Solution(object):
    def largestOddNumber(self, num):
        for i in range(len(num) - 1, -1, -1):
            if num[i] in {'1', '3', '5', '7', '9'}:
                return num[:i + 1]
        return ''
        
str = "52"
print(Solution().largestOddNumber(str))
