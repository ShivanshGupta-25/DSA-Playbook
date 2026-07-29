from typing import Optional

# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

class Solution:
    def rotateRight(self, head: Optional[ListNode], k: int) -> Optional[ListNode]:
        if not head or not head.next or k == 0:
            return head

        # Find length and last node
        tail = head
        length = 1

        while tail.next:
            tail = tail.next
            length += 1

        # Reduce k
        k %= length
        if k == 0:
            return head

        # Make the list circular
        tail.next = head

        # Find the new tail
        steps = length - k
        new_tail = head
        for _ in range(steps - 1):
            new_tail = new_tail.next

        # New head
        new_head = new_tail.next

        # Break the circle
        new_tail.next = None

        return new_head

a = ListNode(1)
b = ListNode(2)
c = ListNode(3)
d = ListNode(4)
e = ListNode(5)

a.next = b
b.next = c
c.next = d
d.next = e
temp = a
while temp:
    print(temp.val, end=' ')
    temp = temp.next
print()
a = Solution().rotateRight(a, 2)

temp = a
while temp:
    print(temp.val, end=' ')
    temp = temp.next