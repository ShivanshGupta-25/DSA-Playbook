import math

class Solution:
    def isPalindrome(self, x: int) -> bool:
        n = x
        rev = 0
        while n > 0:
            rev = rev * 10 + n % 10
            n = n // 10
        return x == rev
    
if __name__ == "__main__":
    x = int(input("Enter number : "))
    obj = Solution()
    if obj.isPalindrome(x):
        print(x, "is a palindrome number.")
    else:
        print(x, "is not a palindrome number.")