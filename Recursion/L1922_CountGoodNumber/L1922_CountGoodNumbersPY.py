class Solution:
    def countGoodNumbers(self, n: int) -> int:
        MOD = 10**9 + 7
        
        even_indices = (n + 1) // 2
        odd_indices = n // 2
        
        # Calculate (5^even_indices * 4^odd_indices) % MOD
        total_good_numbers = (pow(5, even_indices, MOD) * pow(4, odd_indices, MOD)) % MOD
        
        return total_good_numbers

a = Solution()
print(a.countGoodNumbers(1)) # 5