a = [2, 5, 1, 3, 0]
max = a[0]
for i in range(1, len(a)):
    if a[i] > max:
        max = a[i]
print(max)