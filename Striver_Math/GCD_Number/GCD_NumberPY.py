def gcd(a, b):
    if b == 0:
        return a
    return gcd(b, a % b)    


a = int(input("Enter two numbers: "))
b = int(input("Enter two numbers: "))


print("GCD of", a, "and", b, "is", gcd(a, b))