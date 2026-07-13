from typing import Optional

# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val  # int
        self.next = next  # ListNode    

class Solution:
    def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        prev = None
        curr = head
        
        while curr:
            next_node = curr.next   # store next
            curr.next = prev        # reverse link
            prev = curr             # move prev
            curr = next_node        # move curr
        
        return prev
    
a = ListNode(1)
b = ListNode(2)
c = ListNode(3)
d = ListNode(4)
e = ListNode(5)

a.next = b
b.next = c
c.next = d
d.next = e

print(Solution().reverseList(a).val)