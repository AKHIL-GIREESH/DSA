from collections import deque
from typing import List


class Solution:
    def numEnclaves(self, grid: List[List[int]]) -> int:
        gridCopy = [[0]*len(grid[0]) for i in range(len(grid))]
        q = deque()
        
        for i in range(len(grid[0])):
            if grid[0][i] == 1:
                q.append((0,i))
                gridCopy[0][i] = 1
            if grid[len(grid)-1][i] == 1:
                q.append((len(grid)-1,i))
                gridCopy[len(grid)-1][i] = 1
        
        for i in range(1,len(grid)-1):
            if grid[i][0] == 1:
                q.append((i,0))
                gridCopy[i][0] = 1
            if grid[i][len(grid[0])-1] == 1:
                q.append((i,len(grid[0])-1))
                gridCopy[i][len(grid[0])-1] = 1

        rowRules = [-1,0,1,0]
        colRules = [0,-1,0,1]

        while q:
            i,j = q.popleft()
            for k in range(len(rowRules)):
                if 0 <= i+rowRules[k] < len(grid) and 0<= j+colRules[k] < len(grid[0]) and grid[i+rowRules[k]][j+colRules[k]] == 1 and gridCopy[i+rowRules[k]][j+colRules[k]] != 1:
                    q.append((i+rowRules[k],j+colRules[k]))
                    gridCopy[i+rowRules[k]][j+colRules[k]] = 1
                
        c = 0
        for i in range(len(grid)):
            for j in range(len(grid[0])):
                if gridCopy[i][j] != grid[i][j]:
                    c+=1
        return c

        