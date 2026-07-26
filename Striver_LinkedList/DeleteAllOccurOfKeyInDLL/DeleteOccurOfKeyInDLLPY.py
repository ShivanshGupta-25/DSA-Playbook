# Node class for the doubly linked list
class Node:
    def __init__(self, val):
        # Value stored in the node
        self.data = val
        # Pointer to the previous node
        self.prev = None
        # Pointer to the next node
        self.next = None

# Solution class containing all operations on the doubly linked list
class Solution:
    # Inserts a new node with the given value at the end of the list
    def insert_at_end(self, head_ref, val):
        # Create the new node
        new_node = Node(val)

        # If list is empty, set new node as head
        if head_ref[0] is None:
            head_ref[0] = new_node
            return

        # Traverse to the last node
        temp = head_ref[0]
        while temp.next:
            temp = temp.next

        # Link the new node at the end
        temp.next = new_node
        new_node.prev = temp

    # Prints the entire linked list from head to tail
    def print_list(self, head):
        # Start from the head node
        temp = head

        # Traverse and print each node's data
        while temp:
            print(temp.data, end='')
            if temp.next:
                print(' <-> ', end='')
            temp = temp.next
        print()

    # Deletes all nodes that have the specified target value
    def delete_target_nodes(self, head, target):
        # Start from the head node
        current = head

        # Traverse the entire list
        while current:
            # Store next node before possibly deleting current
            next_node = current.next

            # If current node matches the target value
            if current.data == target:
                # If not the head, link previous node to next
                if current.prev:
                    current.prev.next = current.next
                else:
                    # If it's the head, move head forward
                    head = current.next  

                # If not the tail, link next node to previous
                if current.next:
                    current.next.prev = current.prev

            # Move to the next node
            current = next_node

        # Return updated head
        return head

# Main function to test the linked list operations
if __name__ == "__main__":
    sol = Solution()
    head_ref = [None]

    # Insert values into the doubly linked list
    sol.insert_at_end(head_ref, 1)
    sol.insert_at_end(head_ref, 2)
    sol.insert_at_end(head_ref, 3)
    sol.insert_at_end(head_ref, 2)
    sol.insert_at_end(head_ref, 4)
    sol.insert_at_end(head_ref, 2)
    sol.insert_at_end(head_ref, 5)

    # Print the original list
    print("Original List:")
    sol.print_list(head_ref[0])

    # Delete all nodes with value 2
    target = 2
    head_ref[0] = sol.delete_target_nodes(head_ref[0], target)

    # Print the updated list
    print("\nList after deleting value", target, ":")
    sol.print_list(head_ref[0])
