import math

def countDigits(n):
    count = 0
    while n > 0:
        count += 1
        n = math.floor(n/10)
    return count

n = int(input("Enter a number: "))    
print("Number of digits: ", countDigits(n))