L = input().split()

s = 0

for i in L:
    if i == "U":
        s += 1
    else:
        s+=-1

if s==0:
    print("Sea Level")
elif s>0:
    print("Above Sea Level")
    print(f"Need {s} more Ds")
else:
    print("Below Sea Level")
    print(f"Need {0-s} more Us")
