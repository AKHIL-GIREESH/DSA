L = [2,0,8,3,0,1,0,0,5]

p = 0
q = 1

for p in range(len(L)):
    while q < len(L) and L[q] == 0:
        q+=1
    
    if L[p] == 0 and q<len(L):
        t = L[p]
        L[p] = L[q]
        L[q] = t
        q += 1

print(L)