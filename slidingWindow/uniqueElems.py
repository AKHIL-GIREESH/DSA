arr = [1, 2, 1, 3, 4]
k = 3

d = {}
ans = []

for i in range(k):
    if not d.get(arr[i]):
        d[arr[i]] = 1
    else:
        d[arr[i]] += 1

ans.append(len(d))

for i in range(k,len(arr)):
    d[arr[i-1]] -= 1
    if d[arr[i-1]] == 0:
        del d[arr[i-1]]
    
    if not d.get(arr[i]):
        d[arr[i]] = 1
    else:
        d[arr[i]] += 1
    
    ans.append(len(d))

print(ans)