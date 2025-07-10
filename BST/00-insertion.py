class Node:
    def __init__(self,data):
        self.data = data
        self.left = None
        self.right = None
    

def insert(root,data):
    if root.data == data:
        return True
    
    if root.left == None and root.data > data:
        root.left = Node(data)
        return True
    
    elif root.right == None and root.data < data:
        root.right = Node(data)
        return True

    elif root.data > data:
        l = insert(root.left,data)
        if l:
            return True
    else:
        r = insert(root.right,data)
        if r:
            return True
    
    return False

def inorder(root):
    if root:
        print(root.data)
        inorder(root.left)
        inorder(root.right)
    
root = Node(10)
insert(root,5)
insert(root,15)
insert(root,0)
inorder(root)
