from typing import List

def rotate(matrix: List[List[int]]) -> None:
    n = len(matrix)
    rotatedMatrix = [[0 for i in range(n)] for j in range(n)]
    for i in range(n):
        for j in range(n):
            rotatedMatrix[i][j] = matrix[n - 1 - j][i]
    matrix[:] = rotatedMatrix


if __name__ == '__main__':
    matrix = [[1, 2, 3], [4, 5, 6], [7, 8, 9]]
    rotate(matrix)
    print(matrix)