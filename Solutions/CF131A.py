# cAPS lOCK

word = input()

char1 = word[0]

remaining_word = word[1:]

for c in remaining_word:
    if c != c.capitalize():
        print(word)
        break
else:
    if char1 == char1.capitalize():
        print(word.lower())
    else:
        print(word.title())
