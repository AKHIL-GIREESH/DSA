from collections import deque
from typing import List


class Solution:
    def canFinish(self, numCourses: int, prerequisites: List[List[int]]) -> bool:
        graph = {}

        for i,j in prerequisites:
            if not graph.get(i):
                graph[i] = [j]
            else:
                graph[i].append(j)

        indegree = [0]*numCourses

        for i,j in prerequisites:
            indegree[j] += 1
        
        q = deque()

        for i in range(numCourses):
            if indegree[i] == 0:
                q.append(i)
        
        ans = []

        while q:
            node = q.popleft()
            if graph.get(node):
                for i in graph[node]:
                    indegree[i] -= 1
                    if indegree[i] == 0:
                        q.append(i)
        
        for i in range(numCourses):
            if indegree[i] > 0:
                return False
        return True