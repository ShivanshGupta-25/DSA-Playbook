# Class to represent a Node of a doubly linked list
class Node:
    def __init__(self, data):
        # Initialize the data
        self.data = data
        # Pointer to the next node
        self.next = None
        # Pointer to the previous node
        self.prev = None

# Function to convert a list into a doubly linked list
def convert_list_to_dll(arr):
    # Create the head node from the first element
    head = Node(arr[0])
    # Maintain a previous pointer to link backwards
    prev = head

    # Loop through the rest of the elements
    for i in range(1, len(arr)):
        # Create a new node with previous pointer set to 'prev'
        new_node = Node(arr[i])
        new_node.prev = prev
        # Link previous node's next to this node
        prev.next = new_node
        # Move prev forward
        prev = new_node

    # Return the head of the list
    return head

# Function to reverse the doubly linked list
def reverse_dll(head):
    # Initialize a temporary pointer to traverse the list
    temp = None
    # Start from the head
    current = head

    # Traverse till the end of the list
    while current is not None:
        # Swap the next and prev pointers
        temp = current.prev
        current.prev = current.next
        current.next = temp
        # Move to the next node in original list, which is prev now
        current = current.prev

    # After loop, temp will be pointing to the last node’s prev
    # So, adjust head to the new head of the reversed list
    if temp is not None:
        head = temp.prev

    # Return new head
    return head

# Function to print the doubly linked list
def print_dll(head):
    # Traverse and print each node's data
    while head is not None:
        print(head.data, end=" ")
        head = head.next
    print()

# Driver code
if __name__ == "__main__":
    arr = [10, 20, 30, 40, 50]
    head = convert_list_to_dll(arr)
    print("Original DLL:")
    print_dll(head)
    head = reverse_dll(head)
    print("Reversed DLL:")
    print_dll(head)
