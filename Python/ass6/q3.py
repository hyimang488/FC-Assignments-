with open("Englishnotes.txt", "r") as file:
    content = file.read()

words = content.lower().split()

count = words.count("as")

print("Number of occurrences of 'as':", count)

# import re

# with open("Englishnotes.txt", "r") as file:
#     content = file.read()

# count = len(re.findall(r"\bas\b", content, re.IGNORECASE))

# print("Number of occurrences of 'as':", count)