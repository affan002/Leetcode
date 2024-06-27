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
                now_prev=head
                now_cur=head.next
                while now_cur.val < cur.val:
                    now_prev = now_cur
                    now_cur = now_cur.next

                cur.next = now_cur
                now_prev.next = cur

            prev = cur
            cur=cur.next

        return head.next

        