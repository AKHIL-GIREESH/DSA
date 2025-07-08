class Node:
    def __init__(self,data):
        self.data = data
        self.left = None
        self.right = None

var = True
def Symmetric(l,r):
    global var
    if not l and not r:
        return
    
    #print(l.data,r.data)
    if not l or not r:
        var = False
        return 
    
    if l.data != r.data:
        print(l.data,r.data)
        var = False
        return

    Symmetric(l.left,r.right)
    Symmetric(l.right,r.left)


root = Node(10)
root.left = Node(20)
root.right = Node(20)
root.left.left = Node(30)
root.right.right = Node(30)

Symmetric(root.left,root.right)
print(var)