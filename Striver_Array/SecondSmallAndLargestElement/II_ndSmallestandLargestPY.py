arr = [1, 2, 4, 7, 7, 5]

smallest = float('inf')
second_smallest = float('inf')

largest = float('-inf')
second_largest = float('-inf')

for num in arr:

    # Smallest & Second Smallest
    if num < smallest:
        second_smallest = smallest
        smallest = num

    elif smallest < num < second_smallest:
        second_smallest = num

    # Largest & Second Largest
    if num > largest:
        second_largest = largest
        largest = num

    elif second_largest < num < largest:
        second_largest = num

print("Second Smallest:", second_smallest)
print("Second Largest:", second_largest)