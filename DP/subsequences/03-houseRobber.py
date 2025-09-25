L = [2,3,2]

def HouseRobberRecursion():
    def code(ind,flag):
        if flag:
            if ind < 1:
                return 0
        else:
            if ind < 0:
                return 0
        
        pick = L[ind] + code(ind-2,flag)
        notpick = code(ind-1,flag)

        return max(pick,notpick)
    
    ans1 = code(len(L)-1,True)
    ans2 = code(len(L)-2,False)
    
    return max(ans1,ans2)

def HouseRobberDp():
    def code(ind,flag):
        if flag:
            if i < 1:
                return 0
        else:
            if i < 0:
                return 0
        
        if dp[ind] != -1:
            return dp[ind]

        pick = L[ind]+code(ind-2,flag)
        notpick = code(ind-1,flag)
        dp[ind] = max(pick,notpick)
        return dp[ind]

    dp = [-1]*(len(L)-1)
    ans1 = code(len(L)-1,True)

    dp = [-1]*(len(L)-1)
    ans2 = code(len(L)-2, False)    
    return max(ans1,ans2)

def HouseRobberTabulation():
    
    return

def HouseRobberSpaceOptimization():
    return


print(HouseRobberRecursion())
print(HouseRobberDp())

