# Definition for singly-linked list.
class ListNode:
    def __init__(self, x):
        self.val = x  
        self.next = None  

class Solution:
    def deleteNode(self, node):
        node.val = node.next.val
        node.next = node.next.next
        
a = ListNode(4)
b = ListNode(5)
c = ListNode(1)
d = ListNode(9)
a.next = b
b.next = c
c.next = d
obj = Solution()
obj.deleteNode(b)
print(a.val)
print(b.val)
print(c.val)    