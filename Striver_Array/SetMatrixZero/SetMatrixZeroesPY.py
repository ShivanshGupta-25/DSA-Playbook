from typing import List

class Solution:
    def setZeroes(self, matrix: List[List[int]]) -> None:
        n = len(matrix)
        m = len(matrix[0])

        rows = [0] * n
        cols = [0] * m

        for i in range(n):
            for j in range(m):
                if matrix[i][j] == 0:
                    rows[i] = 1
                    cols[j] = 1

        for i in range(n):
            for j in range(m):
                if rows[i] or cols[j]:
                    matrix[i][j] = 0

matrix = [[1,1,1],[1,0,1],[1,1,1]]
obj = Solution()
obj.setZeroes(matrix)    
print(matrix)   