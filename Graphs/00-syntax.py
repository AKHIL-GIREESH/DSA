graph = {}

edges = [(0, 1), (0, 2), (1, 3), (2, 4)]

# Init
for u,v in edges:
    if graph.get(u):
        graph[u].append(v)
    else:
        graph[u] = [v]
    
    if graph.get(v):
        graph[v].append(u)
    else:
        graph[v] = [u]

print(graph)

# BFS
def BFS(start):
    queue = [start]
    visited = set()

    visited.add(start)

    while queue:
        node = queue.pop(0)
        print(node,end=" ")
        for neightbour in graph[node]:
            if neightbour not in visited:
                queue.append(neightbour)
                visited.add(neightbour)
    print()
BFS(0)

# DFS ( using stack )
def DFS_iterative(start):
    stack = [start]
    visited = set()

    visited.add(start)
    while stack:
        node = stack.pop()
        print(node,end=" ")
        for neighbour in graph[node]:
            if neighbour not in visited:
                stack.append(neighbour)
                visited.add(neighbour)
    print()

DFS_iterative(0)

# DFS recursion

def DFS_recursion(node,visited):
    visited.add(node)
    print(node,end=" ")
    for neighbour in graph[node]:
        if neighbour not in visited:
            DFS_recursion(neighbour,visited)

# visited = set()
DFS_recursion(0,set())

