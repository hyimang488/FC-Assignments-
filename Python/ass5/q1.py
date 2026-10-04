import re

email = input("Enter student email: ")

pattern = r'^[A-Za-z0-9._]+@college\.edu$'

if re.fullmatch(pattern, email):
    print("Valid student email")
else:
    print("Invalid student email")