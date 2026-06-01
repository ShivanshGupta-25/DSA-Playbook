# compute length of the longest subarray with sum 0
def solve(a: list[int]) -> int:
    # store best length found so far
    max_len = 0
    # map prefix sum -> first index seen
    sum_index = {}
    # running prefix sum
    s = 0

    # iterate through the array
    for i, val in enumerate(a):
        # update running sum
        s += val

        # if sum is zero, subarray [0..i] has zero sum
        if s == 0:
            # update best length
            max_len = i + 1
        # if this sum seen before, subarray (prevIndex..i] has zero sum
        elif s in sum_index:
            # maximize length using previous index
            max_len = max(max_len, i - sum_index[s])
        # first time seeing this sum, store its index
        else:
            sum_index[s] = i

    # return best length
    return max_len

# program entry
def main():
    # sample input
    a = [9, -3, 3, -1, 6, -5]
    # print result
    print(solve(a))

# run main
if __name__ == "__main__":
    main()
