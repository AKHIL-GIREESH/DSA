L = [2, 3, 1, 1]
target = (sum(L)+1)//2

def spaceOptimized():
    prev = [False]*(target+1)
    prev[0] = True
    prev[L[0]] = True

    for i in range(len(L)):
        curr = [False]*(target+1)
        curr[0] = True

        for j in range(1,target+1):
            notPick = prev[j]
            pick = False
            if L[i] <= j:
                pick = prev[j-L[i]]
            
            curr[j] = pick or notPick
        prev = curr
    
    for i in range(len(prev)-1,-1,-1):
        if prev[i] == True:
            return abs(i - sum(L)//2)

print(spaceOptimized())