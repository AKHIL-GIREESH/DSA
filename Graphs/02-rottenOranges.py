from typing import List
from collections import deque

class Solution:
    def orangesRotting(self, grid: List[List[int]]) -> int:
        q = deque()
        cnt = 0

        for i in range(len(grid)):
            for j in range(len(grid[0])):
                if grid[i][j] == 2:
                    q.append((i,j))
        
        rowRules = [-1,0,1,0]
        colRules = [0,-1,0,1]
        
        while q:
            cnt += 1
            for _ in range(len(q)):
                r,c = q.popleft()
                for i in range(4):
                    nr,nc = r+rowRules[i], c+colRules[i]
                    if 0 <= nr < len(grid) and 0 <= nc < len(grid[0]) and grid[nr][nc] == 1:
                        grid[nr][nc] = 2

        return cnt
