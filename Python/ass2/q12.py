text = input("Enter an odd length string greater than 7 characters: ")

middle = len(text) // 2

result = text[middle - 1:middle + 2]

print("Middle three characters:", result)