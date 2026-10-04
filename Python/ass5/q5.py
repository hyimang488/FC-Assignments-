import re

password = input("Enter password: ")

pattern = r'^(?=.*[a-z])(?=.*[A-Z])(?=.*[0-9])(?=.*[^A-Za-z0-9]).{8,}$'

if re.fullmatch(pattern, password):
    print("Strong password")
else:
    print("Weak password")