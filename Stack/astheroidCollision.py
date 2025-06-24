from collections import deque

L = [4,7,1,1,2,-3,-7,17,15,-16]
stack = deque()

for i in range(len(L)):
    while(stack and stack[-1] and abs(stack[-1]) < abs(L[i])):
        stack.pop()

    