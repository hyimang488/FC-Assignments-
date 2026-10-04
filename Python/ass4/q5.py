import math

def round_list(numbers):
    result = []

    for num in numbers:
        result.append(math.floor(num + 0.5))

    return result

numbers = [1.2, 2.5, 3.8]

print(round_list(numbers))