from collections import deque

class Node:
    def __init__(self,data):
        self.data = data
        self.left = None
        self.right = None


def zigZag(node):
    flag = True
    queue = deque()
    queue.append(node)

    while(queue):
        l = len(queue)

        if flag:
            [print(queue.popleft(),end=" ") for i in range(l)]
            print()

        else:
            a = [queue.popleft() for i in range(l)][::-1]


root = Node('A')
root.left = Node('B')
root.right = Node('C')
root.left.left = Node('D')
root.left.right = Node('E')

zigZag(root)