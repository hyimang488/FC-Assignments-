def multiply(a, *args):
    product = a

    for num in args:
        product = product * num

    return product

print(multiply(2, 3, 4))
print(multiply(5, 2, 3))
print(multiply(10, 2))