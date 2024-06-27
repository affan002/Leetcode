# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def insertionSortList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        dummy = ListNode(val=None, next=head)
        head = dummy
        prev, cur = head.next, head.next.next
        while cur != None:
            if cur.val < prev.val:
                prev.next = cur.next
                prev2=head
                cur2=head.next
                while cur2.val < cur.val:
                    prev2 = cur2
                    cur2 = cur2.next

                cur.next = cur2
                prev2.next = cur

            prev = cur
            cur=cur.next

        return head.next

        