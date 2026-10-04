import re

text = input("Enter a string: ")

result = re.split(r'[,;\s]+', text)

print(result)