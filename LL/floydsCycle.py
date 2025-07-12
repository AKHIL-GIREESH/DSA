class Node:
    def __init__(self,data):
        self.data = data
        self.next = None

class LL:
    def __init__(self):
        self.head = None 
    
    def insert_at_back(self,Node):
        
        temp = self.head
        if not temp:
            self.head = Node
            return
        while(temp.next != None):
            temp = temp.next
        
        temp.next = Node
    
    def printLL(self):
        temp = self.head
        while(temp):
            print(temp.data,end=" -> ")
            temp = temp.next
        print("None")

ll = LL()
k = None
j = None

for i in range(1,13):
    newNode = Node(i)
    ll.insert_at_back(newNode)
    if i == 4:
        k = newNode
    
    if i == 12:
        j = newNode

j.next = k

s = ll.head
f = ll.head

while s.next != f.next.next:
    s = s.next
    f = f.next.next

s = s.next
f = f.next.next

s = ll.head

while s.next != f.next:
    s = s.next
    f = f.next

print(f.data)











    