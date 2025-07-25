L = [2, 3, 1, 1]
target = 4
dp = [[-1] * (target + 1) for _ in range(len(L))]

def memo(ind, target, dp):
    if target == 0:
        return 1
    
    if ind == 0:
        if L[0] == target:
            return 1
        return 0

    if dp[ind][target] != -1:
        return dp[ind][target]
    
    notpick = memo(ind - 1, target, dp)
    pick = 0
    if target >= L[ind]:
        pick = memo(ind - 1, target - L[ind], dp)
    
    dp[ind][target] = pick + notpick
    return dp[ind][target]

def spaceOptimized():
    prev = [0]*(target+1)
    prev[0] = 1
    if L[0] <= target:
        prev[L[0]] = 1

    for i in range(1,len(L)):
        curr = [1]*(target+1)
        curr[0] = 1
        for j in range(1,target+1):
            notPick = prev[j]
            pick = 0
            if j >= L[i]:
                pick = prev[j-L[i]]
            
            curr[j] = pick + notPick
        prev = curr
    print(prev)
    return prev[target]


print(memo(len(L) - 1, target, dp))
print(spaceOptimized())