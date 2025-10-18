inp = 18

st = ""

while inp > 0:
    print(inp)
    i = 0
    val = 0
    while val <= inp:
        i += 1
        val = 2**(i)
    st+= str(2**(i-1))
    inp-=2**(i-1)

print(st)


