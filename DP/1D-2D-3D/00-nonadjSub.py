L = [2,1,4,9]

def maxSum(L,ind):
    if ind == 0:
        return L[ind]
    
    if ind < 0:
        return 0

    pick = L[ind] + maxSum(L,ind-2)
    nonPick = maxSum(L,ind-1)
    
    return max(pick,nonPick)

print(maxSum(L,len(L)-1))

def spaceOptimised(L):
    prev2 = 0
    prev = L[0]

    for i in range(1,len(L)):
        pick = L[i] + prev2
        nonPick = prev

        prev2 = prev
        prev = max(pick,nonPick)
    
    return prev

print(spaceOptimised(L))

