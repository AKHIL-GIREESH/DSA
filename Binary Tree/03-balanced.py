class Node:
    def __init__(self,value):
        self.data = value
        self.left = None
        self.right = None

def balance(node):
    if not node:
        return 0

    s1 = balance(node.left)
    #print(node.data,end=" ")
    s2 = balance(node.right)
    if s1 == -1 and s2 == -1:return -1
    if abs(s1-s2) > 1:return -1

    return max(s1,s2)+1
    
root = Node('A')
root.left = Node('B')
root.right = Node('C')
root.left.left = Node('D')
root.left.right = Node('E')
root.left.right.right = Node('F')

print(balance(root))