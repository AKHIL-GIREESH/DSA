from collections import deque

L = [3,2,10,11,5,10,6,3]

stack = deque()
maxRecArea = 0

for i in range(len(L)):
    while(stack and L[stack[-1]]>=L[i]):
        x = stack.pop()
        pse = stack[-1] if stack else -1
        tempArea = L[x]*(i - pse -1)
        maxRecArea = max(maxRecArea,tempArea)
    
    stack.append(i)

while(stack):
    x = stack.pop()
    pse = stack[-1] if stack else -1
    tempArea = L[x]*(len(L) - pse - 1)
    maxRecArea = max(maxRecArea,tempArea)

print(maxRecArea)

