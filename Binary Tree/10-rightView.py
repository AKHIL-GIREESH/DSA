class Node:
    def __init__(self,data):
        self.data = data
        self.left = None
        self.right = None

L = []

def rightView(root,level):
    if not root:
        return
    
    if level == len(L):
        L.append(root.data)
    
    rightView(root.right,level+1)
    rightView(root.left,level+1)

root = Node('A')
root.left = Node('B')
root.right = Node('C')
root.left.left = Node('D')
root.left.right = Node('E')
root.right.left = Node('F')
root.right.right = Node('G')
root.left.right.left = Node('H')

rightView(root,0)
print(L)