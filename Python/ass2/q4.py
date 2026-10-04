items = ["apple", "banana", "mango", "orange", "grapes"]

search_item = input("Enter item to search: ")

found = False

for item in items:
    if item == search_item:
        found = True
        break

if found:
    print(search_item, "is present in the list.")
else:
    print(search_item, "is not present in the list.")