n = 4
b = 0

for i in range(1,n+1):
    b = b*10 + i

for i in range(n):
    k = b//10**(n-i)
    j = (b%(10**(n-i)))*10**i
    print(j+k,end=" ")
    print()
