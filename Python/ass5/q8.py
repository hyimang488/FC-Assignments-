import re

text = input("Enter a sentence: ")

pattern = r'\b(\w+)\s+\1\b'

duplicates = re.findall(pattern, text, re.IGNORECASE)

if duplicates:
    print("Duplicate words found:")

    for word in duplicates:
        print(word, word)
else:
    print("No consecutive duplicate words found")