L = [1, 2, 1, 3, 5, 2, 4, 2]

for i in range(0,len(L)-2):
    if L[i] + L[i+2] == L[i+1]:
        print([L[i],L[i+1],L[i+2]])

