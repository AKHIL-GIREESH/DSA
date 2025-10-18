inp = "ABd12341"

checkC = False
checkN = False
checkS = False

for i in inp:
    if not checkC and i.isalpha() and ord(i) > 94:
        checkC = True
    
    elif not checkN and i.isdigit():
        checkN = True

    elif not checkS and i in "$%#@!&*":
        checkS = True
    

if checkS and checkN and checkS:
    print("Works")
else:
    print("!Works")
    
