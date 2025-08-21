L = [3,2,1,0,4]

def BackTrack(ind):
    
    if ind == len(L)-1:
        return True

    if ind >= len(L):
        return False

    if L[ind] == 0:
        return False

    for i in range(1,L[ind]+1):
        ans = BackTrack(ind+i)
        if ans:
            return True
    return False

print(BackTrack(0))