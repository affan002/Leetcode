class Node:
    def __init__(self, data=None):
        self.data = data
        self.prev = None
        self.next = None

class MyLinkedList:

    def __init__(self):
        self.head = Node()
        self.tail = Node()
        self.head.next = self.tail
        self.tail.prev = self.head
        

    def get(self, index: int) -> int:
        curr_ind = 0
        curr = self.head.next
        while curr!=self.tail and curr_ind < index:
            curr_ind += 1
            curr = curr.next

        if curr and curr != self.tail and curr_ind == index:
            return curr.data
        else:
            return -1
        

    def addAtHead(self, val: int) -> None:
        newNode = Node(val)
        newNode.next = self.head.next
        newNode.prev = self.head

        self.head.next.prev = newNode
        self.head.next = newNode

        

    def addAtTail(self, val: int) -> None:
        newNode = Node(val)
        newNode.next = self.tail
        newNode.prev = self.tail.prev

        self.tail.prev.next = newNode
        self.tail.prev = newNode
        

    def addAtIndex(self, index: int, val: int) -> None:
        curr_ind = 0
        curr = self.head.next

        while curr_ind < index and curr != self.tail:
            curr = curr.next
            curr_ind += 1

        if curr and index == curr_ind:
            newNode = Node(val)
            newNode.next = curr
            newNode.prev = curr.prev

            curr.prev.next = newNode
            curr.prev = newNode

        

    def deleteAtIndex(self, index: int) -> None:
        curr_ind = 0
        curr = self.head.next

        while curr_ind < index and curr != self.tail:
            curr = curr.next
            curr_ind += 1

        if curr and curr != self.tail and index == curr_ind:
            curr.prev.next = curr.next
            curr.next.prev = curr.prev

            

        
        


# Your MyLinkedList object will be instantiated and called as such:
# obj = MyLinkedList()
# param_1 = obj.get(index)
# obj.addAtHead(val)
# obj.addAtTail(val)
# obj.addAtIndex(index,val)
# obj.deleteAtIndex(index)