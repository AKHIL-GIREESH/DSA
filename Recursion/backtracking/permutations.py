L = [1,2,3]
M = {}
for i in L:
    M[i] = False

def Permutations(result,index):
    if index == 0:
        print(result)
        return

    for key,val in M.items():
        if not val:
            M[key] = not val
            result.append(key) 
            Permutations(result,index-1)
            result.pop()
            M[key] = val
    

Permutations([],len(L))