from collections import deque

class Node:
    def __init__(self,data):
        self.data = data
        self.left = None
        self.right = None

m = {}
q = deque()

def VerticalTraversal(root):
    q.append((root,0,0))

    while q:
        node,x,y = q.popleft()
        
        if m.get(x) and m.get(x).get(y):
            m[x][y].append(node.data)
        else:
            if not m.get(x):
                m[x] = {}
            m[x][y] = [node.data]

        if node.left:
            q.append((node.left,x-1,y+1))
        if node.right:
            q.append((node.right,x+1,y+1))

    for i in range(min(m),max(m)+1):
        for j in range(min(m[i]),max(m[i])+1):
            if m.get(i) and m.get(i).get(j):
                if len(m[i][j]) > 1:
                    print(min(m[i][j])) 
                    print(max(m[i][j]))
                else:
                    print(m[i][j][0])


root = Node('A')
root.left = Node('B')
root.right = Node('C')
root.left.left = Node('D')
root.left.right = Node('E')
root.right.left = Node('F')
root.right.right = Node('G')
root.left.right.left = Node('H')

VerticalTraversal(root)