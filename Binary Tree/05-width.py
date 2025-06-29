from collections import deque

class Node:
    def __init__(self,data):
        self.data = data
        self.left = None
        self.right = None

def width(node):
    queue = deque()

    queue.append([node,0])
    w = 0

    while(queue):
        queueLen = len(queue)
        firstIndex = queue[0][1]
        lastIndex = queue[-1][1]

        w = max(lastIndex-firstIndex+1,w)

        for _ in range(queueLen):
            n,i = queue.popleft()
            l = n.left
            r = n.right

            if l:
                queue.append([l,2*i])
            if r:
                queue.append([r,2*i+1])


    return w 

root = Node('A')
root.left = Node('B')
root.right = Node('C')
root.left.left = Node('D')
root.right.right = Node('E')

print(width(root))


