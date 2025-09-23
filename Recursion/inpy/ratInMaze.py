maze = [
  [1, 1, 1, 0],
  [1, 1, 1, 1],
  [0, 0, 0, 0],
  [1, 1, 1, 1]
]

N = 4
ans = []
directions = [(1,0),(0,1),(-1,0),(0,-1)]

def RatInMaze(arr,i,j):
    if i == N-1 and j == N-1:
        print(arr)
        ans.append(arr)
        return 1

    maze[i][j] = -1
    c = float("-inf")
    for x,y in directions:
        dx = x+i; dy = y+j
        if (0 <= dx < N and 0 <= dy < N) and maze[dx][dy] == 1:
            arr.append((dx,dy))
            
            c = max( RatInMaze(arr,x+i,y+j),c)
            arr.pop()
    maze[i][j] = 1

    if c == float("-inf"):
        return float("-inf")
    return c+1

ans = RatInMaze([],0,0)
if ans == float("-inf"):
    print(-1)
else:
    print(ans)
