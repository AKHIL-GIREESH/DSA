# s = "abcde"
# st = "abcda"
   
# print(list(set(s)^set(st)))


# l = [90,10,20,20,90]
# v = 0

# for i in range(len(l)):
#     v = v^l[i]

# print(v)

# n=[11,2,3,0]
# cp=1
# p=-10000000
# for i in range(len(n)):
#     cp=1
#     for j in range(i,len(n)):
#         cp=cp*n[j]
#     if cp>p:
#         p=cp

# print(len(n))
# print(p)


a=12
b=24
while b!=0:
    a,b=b,a%b
print(a)



# bm=1<<(k-1)

# if n&bm==0:
#     print(0)
# else:
#     print(1)