with open("source.txt", "r") as source:
    content = source.read()

with open("destination.txt", "w") as destination:
    destination.write(content)

print("Contents copied successfully.")

with open("destination.txt", "r") as file:
    print(file.read())