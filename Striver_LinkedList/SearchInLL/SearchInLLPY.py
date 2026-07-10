class Node:
    def __init__(self,data,next=None):
        self.data = data
        self.next = None

class Solution:
    # Function to search an element in a linked list
    def searchInLinkedList(self, head, val):
        # Initialize a pointer to traverse the linked list
        temp = head

        # Traverse the linked list
        while temp is not None:
            # If the value is found, return True
            if temp.data == val:
                return True

            # Move to the next node
            temp = temp.next

        # If the value is not found, return False
        return False

# Creating a sample linked list        
head = Node(10)
head.next = Node(20)
head.next.next = Node(30)

# Create Solution object
obj = Solution()

# Search and print the element
print("Searched Element in Linked List:",obj.searchInLinkedList(head,20))
