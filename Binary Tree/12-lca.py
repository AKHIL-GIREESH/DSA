class Node:
    def __init__(self,data):
        self.data = data
        self.left = None 
        self.right = None

def LCA(root,x,y):
    if not root:
        return None

    if x == root.data or y == root.data:
        return root.data
    
    l = LCA(root.left,x,y)
    r = LCA(root.right,x,y)

    if not r and not l:
        return None
    
    if not l:
        return r
    if not r:
        return l
    if l and r:
        return root.data


root = Node(10)
root.left = Node(20)
root.right = Node(20)
root.left.left = Node(30)
root.right.right = Node(30)

print(LCA(root,20,30))