def generate(n, curr, result):
    # Base case: if length is n, add to result
    if len(curr) == n:
        result.append(curr)
        return

    # Always try adding '0'
    generate(n, curr + "0", result)

    # Add '1' only if previous char is not '1'
    if not curr or curr[-1] != '1':
        generate(n, curr + "1", result)

def main():
    # Input length n
    n = 3

    # List to store results
    result = []

    # Start recursion with empty string
    generate(n, "", result)

    # Print results
    print(result)

if __name__ == "__main__":
    main()