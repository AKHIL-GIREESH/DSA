n = int(input())
song = input()

L = [i for i in range(n)]
ind = 0
curr = 0

while len(L) != 1:
    
    if song[ind] == 'y':
        L.pop(curr)
    else:
        curr = (curr+1)%len(L)
    ind = (ind+1)%len(song)

    print(L)

print(L[0])




