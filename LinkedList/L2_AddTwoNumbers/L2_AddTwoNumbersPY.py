from typing import Optional
from collections import deque
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        
        dummy = ListNode()
        res = dummy

        total = carry = 0

        while l1 or l2 or carry:
            total = carry

            if l1:
                total += l1.val
                l1 = l1.next
            if l2:
                total += l2.val
                l2 = l2.next
            
            num = total % 10
            carry = total // 10
            dummy.next = ListNode(num)
            dummy = dummy.next
        
        return res.next

L1 = ListNode(2)
L1.next = ListNode(4)
L1.next.next = ListNode(3)

L2 = ListNode(5)
L2.next = ListNode(6)
L2.next.next = ListNode(4)

L3 = Solution().addTwoNumbers(L1, L2)

while L3:
    print(L3.val, end=' ')
    L3 = L3.next