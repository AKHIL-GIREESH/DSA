a = [1,2,3,4,5]

def reverse(s=0,e=4):
    print(s,e)
    while s < e:
        a[s],a[e] = a[e],a[s]
        s += 1
        e -= 1

k = 2

reverse(0,k)
print(a)
reverse(k+1)
print(a,"\n\n")
reverse()

print(a)