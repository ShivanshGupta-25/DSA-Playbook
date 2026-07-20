class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val  
        self.next = next

class Solution:
    def oddEvenList(self, head: ListNode) -> ListNode:
        if not head or not head.next:
            return head
        
        odd, even = head, head.next
        even_head = even
        
        while even and even.next:
            odd.next = even.next
            odd = odd.next
            even.next = even.next.next
            even = even.next

        odd.next = even_head  # Connect odd list to even list
        return head
    
a = ListNode(1)
a.next = ListNode(2)
a.next.next = ListNode(3)
a.next.next.next = ListNode(4)
a.next.next.next.next = ListNode(5)

obj = Solution()
ans = obj.oddEvenList(a)
while ans:
    print(ans.val, end=' ')
    ans = ans.next  