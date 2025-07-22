L = [[10,50,1],[5,100,11]]

def ninja(L,ind,prev):
    if ind == len(L):
        return 0

    total = 0
    for i in range(len(L[0])):
        if i != prev:    
            total = max(total,L[ind][i] + ninja(L,ind+1,i))
    return total

print(ninja(L,0,-1))