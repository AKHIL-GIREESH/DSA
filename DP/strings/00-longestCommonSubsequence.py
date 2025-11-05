s1 = "abcd"
s2 = "amnobkcd"

def recursion(ind1,ind2):
    if ind1 == 0 or ind2 == 0:
        return 0

    if s1[ind1-1] == s2[ind2-1]:
        return 1 + recursion(ind1-1,ind2-1)
    
    return max(recursion(ind1-1,ind2),recursion(ind1,ind2-1))

print(recursion(len(s1),len(s2)))
    

def spaceOptimization():
    prev = [0]*(len(s2)+1)

    for i in range(1,len(s1)+1):
        curr = [0]*(len(s2)+1)
        for j in range(1,len(s2)+1):
            if s1[i-1] == s2[j-1]:
                curr[j] = 1+prev[j-1]
            else:
                curr[j] = max(prev[j],curr[j-1])
        prev = curr
    
    return prev[-1]

print(spaceOptimization())
            
