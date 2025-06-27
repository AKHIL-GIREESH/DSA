from collections import deque

class Node:
    def __init__(self,data):
        self.data = data
        self.left = None
        self.right = None
    
def LevelOrdering(root):
    if not root:
        return

    queue = deque()
    queue.append(root)

    while queue:
        node = queue.popleft()
        print(node.data, end=" ")

        if node.left:
            queue.append(node.left)
        if node.right:
            queue.append(node.right)
         



root = Node('A')
root.left = Node('B')
root.right = Node('C')
root.left.left = Node('D')
root.left.right = Node('E')

LevelOrdering(root)