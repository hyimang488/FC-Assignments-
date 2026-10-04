# import os

# os.rename("oldfile.txt", "newfile.txt")

# print("File renamed successfully.")

# import os

# os.remove("newfile.txt")

# print("File deleted successfully.")

# import os

# if os.path.exists("newfile.txt"):
#     os.remove("newfile.txt")
#     print("File deleted successfully.")
# else:
#     print("File does not exist.")


with open("Myfile.txt", "r") as file:
    content = file.read()

if len(content) > 0:
    content = "O" + content[1:]

with open("Myfile.txt", "w") as file:
    file.write(content)

print("First character replaced successfully.")