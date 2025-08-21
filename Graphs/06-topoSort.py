graph = {
    0: [1],
    1: [2],
    2: [3, 6],
    3: [4],
    4: [5],
    5: [],
    6: [4],
    7: [1, 8],
    8: [9],
    9: [7]
}

visited = [False]*len(graph)
stack = []

def DFS(node):
    visited[node] = True

    for i in graph[node]:
        if not visited[i]:
            DFS(i)

    stack.append(node)

DFS(0)
print(stack)