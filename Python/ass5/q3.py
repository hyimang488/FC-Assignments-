import re

pan = input("Enter PAN number: ")

pattern = r'^[A-Z]{5}[0-9]{4}[A-Z]$'

if re.fullmatch(pattern, pan):
    print("Valid PAN number")
else:
    print("Invalid PAN number")