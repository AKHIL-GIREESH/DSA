class Node:
    def __init__(self,data):
        self.data = data
        self.left = None
        self.right = None

L = []
s = []

def LeftB(node):
    if not node:
        return

    if not node.left and not node.right:
        return
    
    L.append(node.data)

    if node.left:
        LeftB(node.left)
    elif node.right:
        LeftB(node.right)


def Leaf(node):
    if not node:
        return
    
    if not node.left and not node.right:
        L.append(node.data)

    if node.left:
        Leaf(node.left)
    if node.right:
        Leaf(node.right) 


def RightB(node):
    if not node:
        return

    if not node.left and not node.right:
        return
    
    s.append(node.data)

    if node.right:
        RightB(node.right)
    elif node.left:
        RightB(node.left)

    pass


root = Node('A')
root.left = Node('B')
root.right = Node('C')
root.left.left = Node('D')
root.left.right = Node('E')
root.right.left = Node('F')
root.right.right = Node('G')
root.left.right.left = Node('H')

L.append(root.data)
LeftB(root.left)
Leaf(root)
RightB(root.right)

while s:
    L.append(s.pop())

print(L)
