class Node:
    def __init__(self,data):
        self.data = data
        self.left = None
        self.right = None

d = 0

def diameter(node):
    global d
    if not node:
        return 0
    
    lh = diameter(node.left)
    rh = diameter(node.right)

    d = max(d,lh+rh)

    return 1+ max(lh,rh)


root = Node('A')
root.left = Node('B')
root.right = Node('C')
root.left.left = Node('D')
root.right.right = Node('E')

diameter(root)
print(d)