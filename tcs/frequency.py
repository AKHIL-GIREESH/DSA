L = [2,3,1,4,1,6,5,6,1,3,1,2]
d = {}

for i in range(len(L)):
    if not d.get(L[i]):
        d[L[i]] = 1
    else:
        d[L[i]] += 1

for key,value in d.items():
    print(key,value)

