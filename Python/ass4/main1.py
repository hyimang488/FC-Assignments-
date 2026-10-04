def calculate_factorial(number):
    import math_utils
    return math_utils.factorial(number)

num = int(input("Enter a number: "))

print("Factorial:", calculate_factorial(num))