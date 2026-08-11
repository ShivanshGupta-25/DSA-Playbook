from queue import Queue

# Stack implementation using Queue
class QueueStack:
    def __init__(self):
        # Queue
        self.q = Queue()

    # Method to push element in the stack
    def push(self, x):
        # Get size
        s = self.q.qsize()
        # Add element
        self.q.put(x)

        # Move elements before new element to back
        for _ in range(s):
            self.q.put(self.q.get())

    # Method to pop element from stack
    def pop(self):
        # Get front element
        n = self.q.queue[0]
        # Remove front element
        self.q.get()
        # Return removed element
        return n

    # Method to return the top of stack
    def top(self):
        # Return front element
        return self.q.queue[0]

    # Method to check if the stack is empty
    def isEmpty(self):
        return self.q.empty()

if __name__ == "__main__":
    st = QueueStack()

    # List of commands
    commands = ["QueueStack", "push", "push", "pop", "top", "isEmpty"]
    inputs = [[], [4], [8], [], [], []]

    for i in range(len(commands)):
        if commands[i] == "push":
            st.push(inputs[i][0])
            print("null", end=" ")
        elif commands[i] == "pop":
            print(st.pop(), end=" ")
        elif commands[i] == "top":
            print(st.top(), end=" ")
        elif commands[i] == "isEmpty":
            print("true" if st.isEmpty() else "false", end=" ")
        elif commands[i] == "QueueStack":
            print("null", end=" ")