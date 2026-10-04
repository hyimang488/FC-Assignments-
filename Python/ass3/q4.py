def print_details(**kwargs):
    for key, value in kwargs.items():
        print(key, ":", value)

print_details(name="Prachi", age=20)
print()

print_details(name="Amit", city="Pune", course="Python")