capacity = 10


def check(num,capacity):
    if num.isdigit():
        num = int(num)
        if num <= 0:
            print("Invalid Number")
        elif num > capacity:
            print("Out of stock :(")
        else:
            capacity -= num
            for i in range(num):
                print("Take your pepsi")
    else:
        print("Invalid Number")
    return capacity

while(True):
    n = input("How many Pepsi do u want?")
    capacity = check(n,capacity)
    print("Enjoy your drink")    