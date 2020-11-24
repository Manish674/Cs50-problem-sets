import math
from cs50 import get_string

text = get_string("Text: ")

i = 0
letters = 0
words = 0
sentences = 0

for char in text:
    if char.isalpha():
        letters += 1

    elif char.isspace():
        words += 1

    elif char == "?" or char == "!" or char == ".":
        sentences += 1

words += 1

# L is the average number of letters per 100 words
# S is the average number of sentences per 100 words
l = letters * 100 / words
s = sentences * 100 / words

L = "{:.2f}".format(l)
S = "{:.2f}".format(s)

index = round(0.0588 * float(L) - 0.296 * float(S) - 15.8)
grade = index

if grade < 1:
    print("Before Grade 1")

elif grade >= 16:
    print("Grade 16+")

else:
    print(f"Grade {index}")
