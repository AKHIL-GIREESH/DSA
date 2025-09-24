from collections import deque

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

def LCA(node):
    if not node:
        return None 
    
    if node.data in [7,9]:
        return node

    l = LCA(node.left)
    r = LCA(node.right)

    if l and r:
        return node

    return l or r








    


root = Node(1)
root.left = Node(2)
root.right = Node(3)

root.left.left = Node(4)
root.left.right = Node(5)

root.right.left = Node(6)
root.right.right = Node(7)

root.right.right.left = Node(8)
print(LCA(root).data)