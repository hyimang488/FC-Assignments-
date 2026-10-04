with open("image.png", "rb") as source:
    data = source.read()

with open("copy_image.png", "wb") as destination:
    destination.write(data)

print("Binary file copied successfully.")