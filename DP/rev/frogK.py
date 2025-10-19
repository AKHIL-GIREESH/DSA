L = [30,10,60,10,60,50,40]
def frogK(ind):
    if ind == 0:
        return 0
    
    cost = float("inf")
    for i in range(1,4):
        if ind >= i:
            cost = min(cost,frogK(ind-i)+abs(L[ind]-L[ind-i]))
    return cost

print(frogK(len(L)-1))