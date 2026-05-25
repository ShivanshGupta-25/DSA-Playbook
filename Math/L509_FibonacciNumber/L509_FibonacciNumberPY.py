def fibonacci(n):
    if n<=1:
        return n
    else:
        return fibonacci(n-1)+fibonacci(n-2)

n=int(input("Enter the value of n: "))
print("The "+str(n)+"th Fibonacci number is "+str(fibonacci(n)))