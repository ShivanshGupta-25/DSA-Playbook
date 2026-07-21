from typing import List

# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

class Solution:
    def removeNthFromEnd(self, head: ListNode, n: int) -> ListNode:
        fast = head
        slow = head

        # Move fast pointer n steps ahead
        for _ in range(n):
            fast = fast.next

        # If fast becomes None, remove the head
        if not fast:
            return head.next

        # Move both pointers
        while fast.next:
            fast = fast.next
            slow = slow.next

        # Delete nth node from end
        slow.next = slow.next.next

        return head
    
a = Solution()

# Test case 1
head = ListNode(1)
head.next = ListNode(2)
head.next.next = ListNode(3)
head.next.next.next = ListNode(4)
head.next.next.next.next = ListNode(5)

print(a.removeNthFromEnd(head, 2).val)