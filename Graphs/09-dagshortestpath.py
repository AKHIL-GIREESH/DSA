edges =[[0,1,2],[0,4,1],[4,5,4],[4,2,2],[1,2,3],[2,3,6],[5,3,1]]
n = 6
graph = {}

for u,v,wt in edges:
    if not graph.get(u):
        graph[u] = [(v,wt)]
    else:
        graph[u].append((v,wt))
    
visited = [False]*n
stack = []

def DFS(node):
    visited[node] = True
    if graph.get(node):
        for i,_ in graph[node]:
            if not visited[i]:
                DFS(i)
    stack.append(node)

DFS(0)
# print(graph)
# print(stack)
shortestPath = [float('inf')]*n
shortestPath[stack[-1]] = 0
while stack:
    node = stack.pop()
    if graph.get(node):
        for i,wt in graph[node]:
            shortestPath[i] = min(shortestPath[i],shortestPath[node]+wt)

print(shortestPath)