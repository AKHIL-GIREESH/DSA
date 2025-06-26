g = 3
l = int(input("Lemons at hand : "))
t = l

if l>=7:
    print("God1: Offered 7")
    l -= 7
    if l>=7:
        print("God2: Offered 7")
        l-=7
        if l >= 7:
            print("God3: Offered 7")
            l -= 7
            if l:
                print(f"Surplus : {l}")
            else:
                print("Sufficient")
        else:
            print(f"God3: Balance {l} need {7-l}")
            print(f"Shortage {7-l}")
    else:
        print(f"God2: Balance {l} need {7-l}")
        print("God3: need 7")
        print(f"Shortage {l+7}")
else:
    print(f"God1: Balance {l} need {7-l}")
    print("God2: need 7")
    print("God3: need 7")
    print(f"Shortage {14+l}")

