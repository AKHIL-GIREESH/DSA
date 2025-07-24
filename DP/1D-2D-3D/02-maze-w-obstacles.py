from typing import List


class Solution:
    def uniquePathsWithObstacles(self, obstacleGrid: List[List[int]]) -> int:
        dp = [0]*len(obstacleGrid[0])

        for i in range(len(obstacleGrid)):
            for j in range(len(obstacleGrid[0])):
                if i == 0 and j == 0:
                    dp[j] = 1
                
                if obstacleGrid[i][j] == 1:
                    dp[j] = 0
                
                elif j>0:
                    dp[j] += dp[j-1]

        return dp[-1] 