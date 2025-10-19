n = 4

s = 0
for i in range(n):
    s += (2*sum(range(2+i+1))-1)

print(s)