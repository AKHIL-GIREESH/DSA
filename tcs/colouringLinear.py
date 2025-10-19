l = int(input())
q = int(input())

ans = [-1]*l
count = 0

for i in range(q):
    ind,c = input().split(" ")
    ind = int(ind)
    c = int(c)
    ans[ind] = c

    print(ans)
    if ind-1 >= 0 and ans[ind-1] == ans[ind]:
        count+=1
    if ind+1 <= l and ans[ind+1] == ans[ind]: 
        count+=1
    
    print(count)