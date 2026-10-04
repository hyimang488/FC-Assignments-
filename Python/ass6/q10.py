import os

if not os.path.exists("MyFolder"):
    os.mkdir("MyFolder")
    print("Directory created successfully.")
else:
    print("Directory already exists.")

print("Current working directory:", os.getcwd())