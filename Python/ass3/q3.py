def sum_numbers(*args):
    total = 0

    for num in args:
        total += num

    return total

print(sum_numbers(1, 2))
print(sum_numbers(1, 2, 3, 4))
print(sum_numbers(10, 20, 30))