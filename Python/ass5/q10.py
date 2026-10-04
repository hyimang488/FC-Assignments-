import re

message = input("Enter message: ")

bad_words = ["stupid", "idiot", "fool"]

pattern = r'\b(' + '|'.join(bad_words) + r')\b'

result = re.sub(
    pattern,
    lambda match: '*' * len(match.group()),
    message,
    flags=re.IGNORECASE
)

print("Censored message:", result)