class Solution:
    def maximalSquare(self, matrix):
        if matrix is None or len(matrix) < 1:
            return 0

        ROWS, COLS = len(matrix), len(matrix[0])
        dp = [[0 for _ in range(COLS + 1)] for _ in range(ROWS + 1)]
        max_side = 0

        for r in range(1, ROWS + 1):
            for c in range(1, COLS + 1):
                if matrix[r - 1][c - 1] == '1':
                    dp[r][c] = min(dp[r - 1][c], dp[r][c - 1], dp[r - 1][c - 1]) + 1
                    max_side = max(max_side, dp[r][c])

        return max_side * max_side
