L = [10,20,30,10]

def recursiveFrog(i):
    if i == 0:
        return 0
    
    l = recursiveFrog(i-1) + abs(L[i] - L[i-1])
    r = float("inf")
    if i > 1:
        r = recursiveFrog(i-2) + abs(L[i] - L[i-2])
    

    return min(l,r)


dp = [-1]*len(L)
def dpFrog(i):
    if i == 0:
        return 0
    
    if dp[i] != -1:
        return dp[i]
    
    l = recursiveFrog(i-1) + abs(L[i] - L[i-1])
    r = float("inf")
    if i > 1:
        r = recursiveFrog(i-2) + abs(L[i] - L[i-2])

    dp[i] = min(l,r) 
    return dp[i]



def tabulationFrog():
    ans = [float("inf")]*len(L)
    ans[0] = 0
    for i in range(1,len(L)):
        l = ans[i-1] + abs(L[i] - L[i-1])
        r = float("inf")
        if i>1:
            r = ans[i-2] + abs(L[i] - L[i-2])
        
        ans[i] = min(l,r)
    
    return ans[len(L)-1]
        


    return

print(recursiveFrog(len(L)-1))
print(dpFrog(len(L)-1))
print(tabulationFrog())


