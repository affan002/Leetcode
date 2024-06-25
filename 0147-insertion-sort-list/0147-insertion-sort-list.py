# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def insertionSortList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        lst = []
        while head:
            lst.append(head.val)
            head = head.next

        lst.sort()

        head = ListNode(lst[0])
        temp = head
        for i in lst[1:]:
            temp.next = ListNode(i)
            temp = temp.next

        return head
