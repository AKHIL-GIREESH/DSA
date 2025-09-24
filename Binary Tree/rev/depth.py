class Node:
    def __init__(self,value):
        self.data = value
        self.left = None
        self.right = None


def inorder(node):
    if node:
        inorder(node.left)
        print(node.data,end=" ")
        inorder(node.right)

def depth(node):
    if not node:
        return 0
    
    l = depth(node.left)
    r = depth(node.right)

    return 1+max(l,r)


root = Node(1)
root.left = Node(2)
root.right = Node(3)

root.left.left = Node(4)
root.left.right = Node(5)

root.right.left = Node(6)
root.right.right = Node(7)

root.right.right.left = Node(8)
print(depth(root))