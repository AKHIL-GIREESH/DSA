L = [[10,40,70],[20,50,80],[30,60,90]]

def Ninja(ind,prev):
    if ind == len(L)-1:
        ans = float('-inf')
        for i in range(3):
            if ind != i:
                ans = max(ans,L[ind][i])
        return ans

    ans = float('-inf')
    for i in range(3):
        if i != prev:
            ans = max(ans,L[ind][i] + Ninja(ind+1,i))
    return ans


def NinjaTabulation():
    prev = [float("-inf")]*len(L)
    
    for i in range(3):
        for j in range(3):
            if i != j:
                prev[i] = max(prev[i],L[0][j])

    curr = [float("-inf")]*len(L)

    for i in range(1,len(L)):
        for j in range(4):
            for k in range(3):
                if j != k:
                    curr[j] = max(curr[j],L[i][j]+prev[k])
        
        prev = curr
        curr = [float("-inf")]*len(L)
    
    return max(curr)
