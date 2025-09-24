L = [10, 30, 40, 50, 20]
K = 3

def recursiveFrog(i):
    if i == 0:
        return 0

    minVal = float("inf")
    for j in range(1,K+1):
        if i > j-1:
            minVal = min(minVal,recursiveFrog(i-j) + abs(L[i] - L[i-j]))

    return minVal


dp = [-1]*len(L)
def dpFrog(i):
    if i == 0:
        return 0
    
    if dp[i] != -1:
        return dp[i]
    
    minVal = float("inf")
    for j in range(1,K+1):
        if i > j-1:
            minVal = min(minVal,recursiveFrog(i-j) + abs(L[i] - L[i-j]))

    dp[i] = minVal 
    return dp[i]



def tabulationFrog():
    ans = [float("inf")]*len(L)
    ans[0] = 0
    for i in range(1,len(L)):
        minVal = float("inf")
        for j in range(1,K+1):
            if i > j-1:
                minVal = min(minVal,ans[i-j] + abs(L[i] - L[i-j]))
        
        ans[i] = minVal
    
    return ans[len(L)-1]
        
print(recursiveFrog(len(L)-1))
print(dpFrog(len(L)-1))
print(tabulationFrog())


