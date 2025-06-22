from collections import deque
L = [3,1,2,4]
PSEA = L.copy()
NSEA = L.copy()

def PSE():
    stack = deque()
    for i in range(len(L)):
        while stack and L[stack[-1]]>=L[i]:
            stack.pop()
        
        if not stack:
            PSEA[i] = -1
        else:
            PSEA[i] = stack[-1]
        stack.append(i)
    print(PSEA)

def NSE():
    stack = deque()
    for i in range(len(L)-1,-1,-1):
        while stack and L[stack[-1]]>=L[i]:
            stack.pop()
        
        if not stack:
            NSEA[i] = len(L)
        else:
            NSEA[i] = stack[-1]
        stack.append(i)
    print(NSEA)

def minSubArraySum():
    s = 0
    for i in range(len(L)):
        s+= L[i]*(i - PSEA[i])*(NSEA[i] - i)
    print(s)

PSE()
NSE()
minSubArraySum()