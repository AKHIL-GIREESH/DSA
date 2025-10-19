inp = "abcdef"
bs = 2
ans = ""

for i in range(0,len(inp),bs):
    val = 0
    for j in range(bs):
        val += ord(inp[i+j])-97
    ans+= chr((val%26)+97)

print(ans)