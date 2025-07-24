from typing import List


class Solution:
    def minPathSum(self, grid: List[List[int]]) -> int:
        dp = [float('inf')] * len(grid[0])

        for i in range(len(grid)):
            for j in range(len(grid[0])):
                if i == 0 and j == 0:
                    dp[j] = grid[i][j]
                    continue

                elif j > 0:
                    dp[j] = min(dp[j-1],dp[j])
                dp[j] += grid[i][j]
        
        return dp[-1]