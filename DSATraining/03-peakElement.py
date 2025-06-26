L = [int(i) for i in input().split() if i.isdigit()]
peak = -1

if len(L) == 0:
    print("No peak")
    exit()

if len(L) == 1:
    print(L[0])
    exit()

if L[0] > L[1]:
    peak = 0
    print(L[0],end=" ")

for i in range(1,len(L)-1):
    if L[i] > L[i+1] and L[i] > L[i-1]:
        peak = 0
        print(L[i],end=" ")

if L[-1] > L[-2]:
    print(L[-1],end=" ")
    peak = 0
    
if peak == -1:
    print("No Peak")

