import re

message = input("Enter message: ")

hashtags = re.findall(r'#\w+', message)
mentions = re.findall(r'@\w+', message)

print("Hashtags:", hashtags)
print("Mentions:", mentions)