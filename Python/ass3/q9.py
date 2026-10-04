student = {
    "name": "Prachi",
    "age": 20,
    "course": "Python",
    "city": "Pune",
    "grade": "A"
}

print("Original dictionary:")
print(student)

# Add a new key-value pair
student["college"] = "Fergusson College"

print("After adding:")
print(student)

# Update an existing key
student["age"] = 21

print("After updating:")
print(student)

# Delete a key-value pair
del student["city"]

print("After deleting:")
print(student)