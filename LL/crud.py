class Node:
    def __init__(self,data=None,next=None):
        self.data = data
        self.next = next

class LL:
    def __init__(self):
       self.head = None

    def insert_at_beginning(self,data):
        newNode = Node(data,self.head)
        self.head = newNode
    
    def insert_at_back(self,data):
        newNode = Node(data,None)
        
        temp = self.head
        while(temp.next != None):
            temp = temp.next
        
        temp.next = newNode

    def remove_from_front(self):
        temp = self.head
        self.head = self.head.next

    
    def printLL(self):
        temp = self.head
        while(temp):
            print(temp.data,end=" -> ")
            temp = temp.next
        print("None")
        
ll = LL()
ll.insert_at_beginning(10)
ll.insert_at_back(15)
ll.insert_at_beginning(5)
ll.remove_from_front()
ll.printLL()

    