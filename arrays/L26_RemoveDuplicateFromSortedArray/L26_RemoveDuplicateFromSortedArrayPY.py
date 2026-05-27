def removeDuplicates(nums):
    i = 1
    j = 1
    while j < len(nums):
        if nums[j] != nums[i - 1]:
            nums[i] = nums[j]
            i += 1
        j += 1
    return i


nums = [0, 0, 1, 1, 1, 2, 2, 3, 3, 4]
k = removeDuplicates(nums)
print(k)
for i in range(k):
    print(nums[i], end=" ")