n = 12
filled = [2,6,7,11]
sub = 0

occupied = set(filled)
count = 0

for i in range(1, n + 1):
    if i in occupied:
        if i%2 == 0 and i-1 in occupied:
            sub += 1
        if i%2 == 1 and i+1 in occupied:
            sub+=1
        if i-2 in occupied:
            sub += 1
        if i+2 in occupied:
            sub += 1

        if i == 1 or i == 2 or i == n or i == n-1:
            count += 1

print(sub, count, occupied)
print((((n//2)-1)*2+(n//2)) - (len(occupied)-count)*3 - count*2 + sub)



    # if i%2 == 1 and i+1<=n and (i+1) not in occupied:
    #     count += 1

    # if i+2 <= n and (i+2) not in occupied:
    #     count += 1



