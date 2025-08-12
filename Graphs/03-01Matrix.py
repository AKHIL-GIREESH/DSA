from collections import deque
from typing import List


class Solution:
    def updateMatrix(self, mat: List[List[int]]) -> List[List[int]]:
        s = set()
        q = deque()

        newMat = [ [ -1 for _ in range(len(mat[0]))] for i in range(len(mat))]

        for r in range(len(mat)):
            for c in range(len(mat[0])):
                if mat[r][c] == 0:
                    q.append((r, c))
                    newMat[r][c] = 0
        
        directions = [(-1, 0), (0, -1), (1, 0), (0, 1)]

        while q:
            r, c = q.popleft()
            for dr, dc in directions:
                nr, nc = r + dr, c + dc
                if 0 <= nr < len(mat) and 0 <= nc < len(mat[0]) and newMat[nr][nc] == -1:
                    newMat[nr][nc] = newMat[r][c] + 1
                    q.append((nr, nc))

        return newMat
