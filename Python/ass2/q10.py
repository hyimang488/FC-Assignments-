text = input("Enter a string: ")
old_word = input("Enter substring to replace: ")
new_word = input("Enter new substring: ")

result = text.replace(old_word, new_word)

print("New string:", result)