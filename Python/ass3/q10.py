numbers = [50, 20, 80, 10, 70, 40, 30, 100, 60, 90]

print("Original list:")
print(numbers)

# Append a new element
numbers.append(110)
print("After append:")
print(numbers)

# Insert an element at the third position
numbers.insert(2, 25)
print("After inserting at third position:")
print(numbers)

# Remove an element
numbers.remove(80)
print("After removing 80:")
print(numbers)

# Sort in ascending order
numbers.sort()
print("Sorted list:")
print(numbers)