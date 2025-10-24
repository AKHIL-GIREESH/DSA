from asyncio.windows_events import NULL


values  = [60, 100, 120]
weights = [10, 20, 30]
capacity = 50

def knapSackRecursion(ind,cap):
    
    if ind == 0:
        if cap >= weights[ind]:
            return values[ind]
        return 0

    notPick = knapSackRecursion(ind-1,cap)
    pick = 0
    if cap >= weights[ind]:
        pick = values[ind] + knapSackRecursion(ind-1,cap-weights[ind])
    

    
    return max(notPick,pick)

def knapSackSpaceOptimisation():
    dp = [0]*(capacity+1)

    for i in range(weights[0],capacity+1):
        dp[i] = values[0] 

    for i in range(len(values)):
        for j in range(capacity,weights[i]-1,-1):
            dp[j] = max(dp[j],values[i]+dp[j-weights[i]])
    
    return dp[capacity]



print(knapSackRecursion(len(values)-1,capacity))
print(knapSackSpaceOptimisation())