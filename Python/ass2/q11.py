text = input("Enter a string: ")

lowercase = 0
uppercase = 0
digits = 0
special = 0

for ch in text:
    if ch.islower():
        lowercase += 1
    elif ch.isupper():
        uppercase += 1
    elif ch.isdigit():
        digits += 1
    else:
        special += 1

print("Lowercase letters:", lowercase)
print("Uppercase letters:", uppercase)
print("Digits:", digits)
print("Special symbols:", special)