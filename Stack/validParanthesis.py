s = []

inp = "(([]))"
inp2 = "(([))"
inp3 = "( )(  )( )"

def checkValidity(st):
    for i in st:
        # print("check",s)
        if i in "([{":
            s.append(i)
        elif i in ")]}":
            
            if s.pop() + i not in "()[]{}":
                return "Not balanced"
    if s:
        return "Not Balanced"
    return "Balanced"

#print(checkValidity(inp))
#print(checkValidity(inp2))
print(checkValidity(inp3))