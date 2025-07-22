#from collections import deque

class DEQUE:
    def __init__(self):
        self.deque = []
    
    def inFront(self,val):
        self.deque.insert(0,val)
        return self.deque
    
    def inBack(self,val):
        self.deque.append(val)
        return self.deque

    def reFront(self):
        if not self.deque:
            return "Empty"
        return self.deque.pop(0)

    def reBack(self):
        if not self.deque:
            return "Empty"
        return self.deque.pop() 
    
dq = DEQUE()
print(dq.inFront(10))
print(dq.inBack(5))
print(dq.reFront())
print(dq.reBack())
print(dq.reBack())
