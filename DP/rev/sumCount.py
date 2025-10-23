L = [2, 3, 1, 1]
target = 10

def recursion(ind,target):
    if target == 0:
        return 1
    
    if ind == 0:
        if L[0] == target:
            return 1
        return 0
    
    notPick = recursion(ind-1,target)
    pick = 0 
    if L[ind] <= target:
        pick = recursion(ind-1,target-L[ind])

    return notPick + pick

print(recursion(len(L)-1,target))


def spaceOptimization():
    prev = [0]*(target+1)
    prev[0] = 1
    if L[0] == target:
        prev[L[0]] = 1

    for i in range(len(L)):
        curr = [0]*(target+1)
        curr[0] = 1

        for j in range(1,target+1):
            notPick = prev[j]
            pick = 0
            if L[i] <= j:
                pick = prev[j-L[i]]
            
            curr[j] = pick + notPick
        
        prev = curr
    return prev[target]

print(spaceOptimization())

