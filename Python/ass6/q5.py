with open("demo1.txt", "r") as file:
    lines = file.readlines()

with open("demo2.txt", "w") as file:
    for i in range(len(lines)):
        if i != 2:
            file.write(lines[i])

print("File copied without line 3.")