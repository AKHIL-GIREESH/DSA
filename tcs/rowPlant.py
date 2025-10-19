r = 3
c = 4
check = 11

if check <= r or check >= (r*c - r) or check%r == 1:
    print("YES")
else:
    print("NO")