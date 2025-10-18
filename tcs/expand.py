inp = "a2c5d8"
ans = ""
i = 0

while i < len(inp):
    c = inp[i]
    i += 1
    num = ""
    while i < len(inp) and inp[i].isdigit():
        num += inp[i]
        i += 1
    ans += c * int(num)

print(ans)
    


