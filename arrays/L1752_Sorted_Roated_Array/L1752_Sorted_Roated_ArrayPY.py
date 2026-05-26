def checkRotatedSorted(arr, n):
    ascending = True
    if arr[0] > arr[1]:
        ascending = False
    change = 0
    if ascending:
        for i in range(1, n):
            if arr[i] < arr[i-1] and change == 0:
                change = 1
            elif arr[i] > arr[i-1] and change == 1:
                return False
        return True
    else:
        for i in range(1, n):
            if arr[i] > arr[i-1] and change == 0:
                change = 1
            elif arr[i] < arr[i-1] and change == 1:
                return False
        return True

arr = [3,4,5,1,7,2]
n = len(arr)
if checkRotatedSorted(arr, n):
    print("true")
else:
    print("false")