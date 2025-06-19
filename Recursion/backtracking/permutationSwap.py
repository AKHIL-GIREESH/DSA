L = [1, 2, 3]

def Permutations(index):
    if index == len(L):
        print(L[:])  
        return
    
    for i in range(index, len(L)):
        L[index], L[i] = L[i], L[index]
        Permutations(index + 1)
        L[index], L[i] = L[i], L[index]

Permutations(0)