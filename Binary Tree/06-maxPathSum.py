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
    
    lh = max(0,pathSum(node.left))
    rh = max(0,pathSum(node.right))

    d = max(d,lh+rh+node.data)
    print(d)

    return node.data+ max(lh,rh)


# root = Node(-10)
# root.left = Node(9)
# root.right = Node(20)
# root.right.left = Node(15)
# root.right.right = Node(7)

root = Node(-11)
root.left = Node(-2)
root.right = Node(-3)

pathSum(root)
print(d)