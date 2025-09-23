N = 4 
m = [[0 for i in range(N)] for j in range(N)]

LL = [0 for i in range(((N-1)*2)+1)]
LU = [0 for i in range(((N-1)*2)+1)] 
L2 = [0 for i in range(N)]

def check(n,i):
    # print((n-1)+(n-i))
    if(LL[n+i] == 1 or L2[i]==1 or LU[(N-1)+(n-i)] ==1):
        return False
    # print(LL,LU,n,i)
    # print("\n")
    return True

def NQ(n):
    if n == N:
        print(m)
        return
    
    for i in range(N):
        if(check(n,i)):
            LL[n+i] = 1
            L2[i] = 1
            LU[(N-1)+(n-i)] = 1
            m[i][n] = 1
            NQ(n+1)
            LL[n+i] = 0
            L2[i] = 0
            LU[(N-1)+(n-i)] = 0
            m[i][n] = 0


NQ(0)