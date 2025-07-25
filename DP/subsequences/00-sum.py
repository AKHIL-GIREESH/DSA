L = [2, 3, 1, 1]
target = 4
dp = [[-1] * (target + 1) for _ in range(len(L))]

def memo(ind, target, dp):
    if target == 0:
        return True
    
    if ind == 0:
        return L[0] == target

    if dp[ind][target] != -1:
        return dp[ind][target]
    
    notpick = memo(ind - 1, target, dp)
    pick = False
    if target >= L[ind]:
        pick = memo(ind - 1, target - L[ind], dp)
    
    dp[ind][target] = pick or notpick
    return dp[ind][target]

def tabulation():
    for i in range(len(L)):
        dp[i][0] = True
    
    if target >= L[0]:
        dp[0][L[0]] = True
    
    for i in range(1,len(L)):
        for j in range(target+1):
            notpick = dp[i-1][j]
            pick = False
            if j >= L[i]:
                pick = dp[i-1][j-L[i]]
            dp[i][j] = notpick or pick
    return dp[len(L)-1][target]

def spaceOptimized():
    prev = [False]*(target+1)
    prev[0] = True
    if L[0] <= target:
        prev[L[0]] = True

    for i in range(1,len(L)):
        curr = [False]*(target+1)
        curr[0] = True
        for j in range(1,target+1):
            notPick = prev[j]
            pick = False
            if j >= L[i]:
                pick = prev[j-L[i]]
            
            curr[j] = pick or notPick
        prev = curr
    return prev[target]


print(memo(len(L) - 1, target, dp))
print(spaceOptimized())