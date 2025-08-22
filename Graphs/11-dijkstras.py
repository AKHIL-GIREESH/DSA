import heapq


V = 5
edges = [
    (0, 1, 2),
    (0, 2, 4),
    (1, 2, 1),
    (1, 3, 7),
    (2, 4, 3),
    (3, 4, 1)
]

graph = {}

for u,v,wt in edges:
    if not graph.get(u):
        graph[u] = [(v,wt)]
    else:
        graph[u].append((v,wt))

q = [(0,0)]
distance = [float('inf')]*V
distance[0] = 0


while q:
    node,wt = heapq.heappop(q)

    if wt > distance[node]:
        continue

    if graph.get(node):
        for i,dis in graph[node]:
            if distance[i] > distance[node]+dis:
                distance[i] = min(distance[i], distance[node]+dis)
                heapq.heappush(q,(distance[i],i))
print(distance)