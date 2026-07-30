class Solution:
    def myAtoi(self, s: str) -> int:
        i = 0
        n = len(s)

        # Skip leading spaces
        while i < n and s[i] == ' ':
            i += 1

        # Determine sign
        sign = 1
        if i < n and (s[i] == '+' or s[i] == '-'):
            if s[i] == '-':
                sign = -1
            i += 1

        num = 0

        # Convert digits
        while i < n and s[i].isdigit():
            num = num * 10 + int(s[i])

            # Handle overflow
            if sign == 1 and num > 2**31 - 1:
                return 2**31 - 1
            if sign == -1 and -num < -2**31:
                return -2**31

            i += 1

        return sign * num

# Test cases
print(Solution().myAtoi("   -42"))
print(Solution().myAtoi("4193 with words"))
print(Solution().myAtoi("-91283472332"))