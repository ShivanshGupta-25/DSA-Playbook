from typing import Optional

class ListNode:
    def __init__(self, x):
        self.val = x
        self.next = None

class Solution:
    def detectCycle(self, head: Optional[ListNode]) -> Optional[ListNode]:
        s = head
        f = head

        while f and f.next:
            s = s.next
            f = f.next.next

            if s == f:
                s = head
                while s != f:
                    s = s.next
                    f = f.next
                return s

        return None


# Creating linked list
a = ListNode(7)
b = ListNode(6)
c = ListNode(5)
d = ListNode(4)
e = ListNode(3)
f = ListNode(2)
g = ListNode(1)

a.next = b
b.next = c
c.next = d
d.next = e
e.next = f
f.next = g

# Create cycle
g.next = a      # Change to d if you want the cycle to start at 4

ans = Solution().detectCycle(a)

if ans:
    print("Cycle starts at node:", ans.val)
else:
    print("No cycle found")