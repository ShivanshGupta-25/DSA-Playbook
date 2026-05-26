a = [1,2,3,4,5]

ascending = True
sorted = True

if a[0] > a[1]:
    ascending = False

if ascending:
    for i in range(1, len(a)):
        if a[i] < a[i-1]:
            sorted = False
            break
else:
    for i in range(1, len(a)):
        if a[i] > a[i-1]:
            sorted = False
            break

if sorted:
    print("True")
else:
    print("False")