num1,num2 = int(input()),int(input())



for i in range(1,11):
    for j in range(num1,num2+1):
        print(f"{j}x{i}={j*i}",end="\t\t")
    print()