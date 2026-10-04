with open("Myfile.txt", "a") as file:
    file.write("\nThis is additional information.")

print("Information added successfully.")

with open("Myfile.txt", "r") as file:
    print(file.read())