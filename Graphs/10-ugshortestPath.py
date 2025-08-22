from collections import deque


n = 9;m = 10
edges = [[0,1],[0,3],[3,4],[4 ,5],[5, 6],[1,2],[2,6],[6,7],[7,8],[6,8]]
src=0

graph = {}

for u,v in edges:
    if not graph.get(u):
        graph[u] = [v]
    else:
        graph[u].append(v)

q = deque([0])
ans = [float("inf")]*n
visited = [False]*n
ans[0] = 0

while q:
    node = q.popleft()
    visited[node] = True
    if graph.get(node):
        for i in graph[node]:
            ans[i] = min(ans[i],ans[node]+1)
            if not visited[i]:
                q.append(i)

print(ans)


