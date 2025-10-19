n,D = input().split()
n = int(n)
D = int(D)
A = 1
B = A+D


# for i in range(n):
#     if i

# while max(a,9-d)

while B <= 9:
    a = A
    b = B
    count = 0
    while count < n:
        print(a,end="")
        count+=1
        if count<n:
            print(b,end="")
            count+=1
        else:
            break
    print(" ",end="")
    A += 1
    B += 1

A = 1+D
B = 1
while A <= 9:
    a = A
    b = B
    count = 0
    while count < n:
        print(a,end="")
        count+=1
        if count<n:
            print(b,end="")
            count+=1
        else:
            break
    print(" ",end="")
    A += 1
    B += 1

