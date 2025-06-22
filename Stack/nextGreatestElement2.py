from collections import deque

L = [2,10,12,1,11]

stack = deque()

for i in range(2*len(L)-1,-1,-1):
    # print(stack)
    
    while(stack and stack[-1] <= L[i%len(L)]):
        stack.pop()
    
    if (not stack):
        x = -1
    else:
        x = stack[-1]
    
    stack.append(L[i%len(L)])
    if(i < len(L)):
        L[i] = x

print(L)