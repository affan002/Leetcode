# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next


class Solution:
    def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:
        dummy = ListNode()
        tail = dummy

        while list1 and list2:
            if list1.val < list2.val:
                tail.next = ListNode(list1.val)
                tail = tail.next
                list1 = list1.next
            else:
                tail.next = ListNode(list2.val)
                tail = tail.next
                list2 = list2.next

        if list1 == None and list2:
            tail.next = list2
        elif list2 == None and list1:
            tail.next = list1

        return dummy.next
            


        
        
        
        