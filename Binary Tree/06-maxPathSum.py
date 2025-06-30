class Node:
    def __init__(self,data):
        self.data = data
        self.left = None
        self.right = None

d = 0

def pathSum(node):
    global d
    if not node:
        return 0
    
    lh = pathSum(node.left)
    rh = pathSum(node.right)

    d = max(d,lh+rh+node.data)

    return node.data+ max(lh,rh)


root = Node(-10)
root.left = Node(9)
root.right = Node(20)
root.right.left = Node(15)
root.right.right = Node(7)

pathSum(root)
print(d)