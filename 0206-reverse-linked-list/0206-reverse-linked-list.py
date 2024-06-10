
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

# class linkedlist:
#     def __init__(self):
#         self.head = None
#         self.tail = self.head
class Solution:
    def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        prev, cur = None, head
        while cur:
            temp = cur.next
            cur.next = prev
            prev = cur 
            cur = temp
        
        return prev
        
        
        