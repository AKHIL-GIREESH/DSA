e = 0; start = [1,3,0,5,8,5]; end =  sorted([2,4,5,7,9,9]);ans = []

for i in range(len(start)):
    if start[i] > e:
        e = end[i]
        ans.append((start[i],end[i]))

print(ans)