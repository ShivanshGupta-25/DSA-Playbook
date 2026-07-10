class Node:
    def __init__(self,data,next=None):
        self.data = data
        self.next = None
        
class Solution:
    # Function to find the length of the linked list
    def lengthOfLinkedList(self, head):
        # Initialize counter to 0
        count = 0

        # Initialize a temporary pointer to head
        temp = head

        # Traverse the linked list
        while temp is not None:
            # Increment count for each node
            count += 1

            # Move to the next node
            temp = temp.next

        # Return the total count
        return count


# Creating a sample linked list
head = Node(10)
head.next = Node(20)
head.next.next = Node(30)

# Create Solution object
obj = Solution()

# Find and print the length of linked list
print("Length of Linked List:",
        obj.lengthOfLinkedList(head))