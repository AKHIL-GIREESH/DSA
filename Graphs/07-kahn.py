from collections import deque

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

indegree = [0]*len(graph)

for node in graph:
    for i in graph[node]:
        indegree[i] += 1

q = deque()

for i in range(len(indegree)):
    if indegree[i] == 0:
        q.append(i)

print(indegree,q)

while q:
    node = q.popleft()
    print(node,end=" ")
    for i in graph[node]:
        indegree[i] -= 1
        if indegree[i] == 0:
            q.append(i)
