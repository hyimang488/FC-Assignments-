text = input("Enter a string: ")

checked = ""

for ch in text:
    if ch not in checked:
        print(ch, ":", text.count(ch))
        checked = checked + ch