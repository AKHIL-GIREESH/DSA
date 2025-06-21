from collections import deque

L = [4,12,5,3,1,2,5,3,1,2,4,6]
stack = deque()

for i in range(len(L)-1,-1,-1):
    if not stack:
        stack.append(L[i])
        L[i] = -1
    
    else:
        x = stack.pop()
        while(x<=L[i]):
            if not stack:
                x = -1
                break
            else:
                x = stack.pop()

        if x:
            stack.append(x)            
        stack.append(L[i])
        L[i] = x

print(L)