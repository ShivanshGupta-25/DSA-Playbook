import re
import string

class Solution:
    def isPalindrome(self, s: str) -> bool:
        lowertext = s.lower()
        cleantext = re.sub(r'[^a-z0-9]',"",lowertext)
        lens = len(cleantext)
        flag = True
        for i in range(lens//2):
            if cleantext[i]!=cleantext[lens-i-1]:
                flag = False
                break
        if flag==True:
            return True
        return False
    
s = input("Enter the string ")
if Solution().isPalindrome(s):
    print("true")
else:
    print("false")