n=int(input("enter scale (eg :- 1 for default size, 2 for double that, 3 for three times the default,etc):"))
b,a=n*5,0
print("\033["+str(b)+"C"+"\033[33mX\033[0m")
for i in range(1,b+1):
	print("\033["+str(((b-i)+a)+1)+"C",end="")
	for j in range(i-a):
		if j==((i-a)-1):
			print("\033[32mA\033[0m")
		else:
			print("\033[32mA\033[31m.",end="")
	a=a+2 if i%5==0 else a
for i in range(int(n/2)+1):
	print("\033["+str(b-n)+"C"+"\033[38;5;95m"+"|"*(1+(2*n)))
