from collections import deque
from typing import List

class Solution:
    def floodFill(self, image: List[List[int]], sr: int, sc: int, color: int) -> List[List[int]]:
        if image[sr][sc] == color:
            return image
        
        s = set()
        oc = image[sr][sc]
        q = deque([sr,sc])

        rowRules = [-1,0,1,0]
        colRules = [0,-1,0,1]

        while q:
            r,c = q.popleft()
            s.add([sr,sc])
            image[r][c] = color

            for i in rowRules:
                for j in colRules:
                    if (r+i)>=0 and (c+j)>=0 and [r+i,c+j] not in s and image[r+i][c+j] == oc:
                        image[r+i][c+j] == color

        
        return image