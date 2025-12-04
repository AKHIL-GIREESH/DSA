class Node:
    def __init__(self,data,next):
        self.data = data
        self.next = next

class LL:
    def __init__(self):
        self.head = None  
    def insert_at_beginning(self,value):
        node = Node(value,self.head)
        self.head = node

    def insert_at_end(self,value):
        temp = self.head

        while temp.next:
            temp = temp.next
        
        temp.next = Node(value,None)

    def insert_at_any_position(self):
        return

    def delete_from_beginning(self):
        return
    
    def delete_from_end(self):
        return
    
    def delete_from_any_position(self):
        return
    
    def printLL(self):
        temp = self.head
        while temp:
            print(f"{temp.data} -> ",end="")
            temp = temp.next

    def reverse(self):
        curr = self.head
        front = curr.next
        prev = None

        while front:
            curr.next = prev
            prev = curr
            curr = front
            front = front.next
        
        curr.next = prev
        self.head = curr


ll = LL()
ll.insert_at_beginning(10)
ll.insert_at_end(15)
ll.insert_at_beginning(5)
ll.insert_at_end(20)
ll.reverse()
ll.printLL()