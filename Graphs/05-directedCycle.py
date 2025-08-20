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

visited =[False]*len(graph) 

def DFS(node,visitedArray):
    #visitedArray = [0]*len(graph)
    visited[node] = True
    visitedArray[node] = True
    if len(graph[node]) > 0:
        for i in graph[node]:
            # if visited[i] and visitedArray[i]:
            #     print("Cycle")
            #     exit(0)
            if not visited[i]:
                if DFS(i,visitedArray):
                    return True
            elif visitedArray[i]:
                print("Cycle")
                return True
    
    visitedArray[node] = 0
    return False
                # visitedArray[node] = 0
        
ans = False
for i in range(len(graph)):
    visitedArray = [0]*len(graph)
    if not visited[i]:
        ans = ans or DFS(i,visitedArray)

print(ans) 