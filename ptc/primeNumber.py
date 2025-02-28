import math as meth

n = int(input(""))

flag = True

for i in range(2,int(meth.sqrt(n))+1):
    if(n%i == 0):
        flag = False;
        break

print(flag)

