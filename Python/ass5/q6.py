import re

text = input("Enter a sentence: ")

numbers = re.findall(r'\d+', text)

print("Numbers found:", numbers)