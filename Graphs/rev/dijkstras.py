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
    if graph.get(u):
        graph[u].append((v,wt))
    else:
        graph[u] = [(v,wt)]

    if graph.get(v):
            graph[v].append((u,wt))
    else:
        graph[v] = [(u,wt)] 

q = [(0,0)]
distance = [float("inf")]*len(graph.keys())
distance[0] = 0
while q:
    print(q,distance)
    cost,node = heapq.heappop(q)
    if distance[node] >= cost:
        if graph.get(node):
            for _node,_cost in graph[node]:
                if distance[_node] > cost+_cost:
                    distance[_node] = cost+_cost
                    heapq.heappush(q,(cost+_cost,_node))

print(distance)
