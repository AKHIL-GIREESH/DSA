L = [2, 3, 1, 1]
target = 4

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