# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

class Solution:
    def deleteMiddle(self, head: ListNode) -> ListNode:
        # If there's only one node, return an empty list
        if not head or not head.next:
            return None

        slow = head
        fast = head
        prev = None

        while fast and fast.next:
            prev = slow
            slow = slow.next
            fast = fast.next.next

        # Delete the middle node
        prev.next = slow.next

        return 

a = ListNode(1)
b = ListNode(3)
c = ListNode(4)
d = ListNode(7)

a.next = b
b.next = c
c.next = d

f = a
while f:
    print(f.val,end=" ")
    f = f.next

ans = Solution()
ans.deleteMiddle(a)
e = a
print("\n")
while e:
    print(e.val,end=" ")
    e = e.next