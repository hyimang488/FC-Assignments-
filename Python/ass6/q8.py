with open("Myfile.txt", "r") as file:
    lines = file.readlines()

line_number = 1

if line_number <= len(lines):
    print("Line 1:", lines[line_number - 1])
else:
    print("Line does not exist.")