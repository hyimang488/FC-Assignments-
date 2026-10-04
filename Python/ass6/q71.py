with open("document.docx", "rb") as source:
    data = source.read()

with open("copy_document.docx", "wb") as destination:
    destination.write(data)

print("Binary file copied successfully.")