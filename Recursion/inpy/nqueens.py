N = 4

matrix = [[0]*N for i in range(N)]

lowerDiagonal = [0]*(2*N-1)
upperDiagonal = [0]*(2*N-1)
rowCheck = [0]*N


def check(r,c):
    if lowerDiagonal[r+c] == 0 and upperDiagonal[(N-1)+(c-r)] == 0 and rowCheck[r] == 0:
        lowerDiagonal[r+c] = 1
        upperDiagonal[(N-1)+(c-r)] = 1
        rowCheck[r] = 1
        return True
    return False

def nQueens(n):
    if n == N:
        print(matrix)
        return

    for i in range(N):
        if check(i,n):
            matrix[i][n] = 1
            # print(matrix)
            nQueens(n+1)
            matrix[i][n] = 0
            lowerDiagonal[i+n] = 0
            upperDiagonal[(N-1)+(n-i)] = 0
            rowCheck[i] = 0

nQueens(0)
