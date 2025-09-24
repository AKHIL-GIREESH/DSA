from collections import deque

class Node:
    def __init__(self,value):
        self.data = value
        self.left = None
        self.right = None

ans = 0

def inorder(node):
    if node:
        inorder(node.left)
        print(node.data,end=" ")
        inorder(node.right)

def width(root):
    global ans
    q = deque([(root,0)])

    while q:
        f = q[0][1]
        l = q[-1][1]
        print(q)

        ans = max(l-f+1,ans)
        for i in range(len(q)):
            node,ind = q.popleft()
            if node.left:
                q.append((node.left,(2*ind+1)-f))
            if node.right:
                q.append((node.right,(2*ind+2)-f))


    


root = Node(1)
root.left = Node(2)
root.right = Node(3)

root.left.left = Node(4)
root.left.right = Node(5)

root.right.left = Node(6)
root.right.right = Node(7)

root.right.right.left = Node(8)
print(width(root))
print(ans)