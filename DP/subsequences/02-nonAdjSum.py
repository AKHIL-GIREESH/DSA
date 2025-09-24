L = [2,7,9,3,1]


def NonAdjSumRecursion(ind):
    if ind < 0 :
        return 0
    
    
    pick = L[ind] + NonAdjSumRecursion(ind-2)
    notpick = NonAdjSumRecursion(ind-1)
    return max(pick,notpick)

    

dp = [-1]*len(L)
def NonAdjSumDp(ind):
    if ind < 0 :
        return 0
    if dp[ind] != -1:
        return dp[ind] 
    pick = L[ind] + NonAdjSumRecursion(ind-2)
    notpick = NonAdjSumRecursion(ind-1)
    dp[ind] = max(pick,notpick)
    return dp[ind]



def NonAdjSumTab():
    ans = [float("-inf")]*len(L)
    ans[0] = 0

    for i in range(2,len(L)):
        notpick = ans[i-1]
        pick = float("-inf")
        if i > 1:
            pick = L[i] + ans[i-2]
        
        ans[i] = max(pick,notpick)
    
    return dp[len(L)-1]
    
def NonAdjSumSpaceOptimized():
    prev = L[0]
    prev1 = 0

    for i in range(1,len(L)):
        notpick = prev
        pick = float("-inf")
        if i > 1:
            pick = L[i] + prev1
        
        prev1 = prev
        prev = max(pick,notpick)
    
    return prev

print(NonAdjSumRecursion(len(L)-1))
print(NonAdjSumDp(len(L)-1))
print(NonAdjSumTab())
print(NonAdjSumSpaceOptimized())
