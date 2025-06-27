from collections import deque

L = [[1,0,1,0,1],[1,0,1,1,1],[1,1,1,1,1],[1,0,0,1,0]]
s = deque()

for i in range(len(L[0])):
    for j in range(1,len(L)):
        # print(i,j)
        if L[j][i] != 0:
            L[j][i] += L[j-1][i]
        
for i in range(len(L)):
    for j in range(len(L[0])):
        pass           # Implement Max Rect