L = [int(i) for i in input().split() if i.isdigit()]

l = 0
h = len(L)-1

if L[l] > L[l+1]:
    print(L[l])
    exit()

if L[h] > L[h-1]:
    print(L[h])
    exit()

while(l>h):
    m = (l+h)//2

    if L[m]>L[m+1] and L[m]>L[m-1]:
        print(L[m])
        exit()
    elif L[m]<L[m+1]:
        l = m+1
    else:
        h = m-1

