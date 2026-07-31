class Solution:
    def power(self, x: float, n: int) -> float:
        if n == 0:
            return 1

        return x * self.power(x, n - 1)

    def myPow(self, x: float, n: int) -> float:
        if n < 0:
            x = 1 / x
            n = -n

        return self.power(x, n)

a = Solution()
x = 2.0
n = 10
print("Power of", x, "to", n, "is:", a.myPow(x, n))
x = 2.1
n = 3
print("Power of", x, "to", n, "is:", a.myPow(x, n))