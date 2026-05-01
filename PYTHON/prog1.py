ru = "йцукенгшщзхъфывапролджэячсмитьбю"
en = "qwertyuiop[]asdfghjkl;'zxcvbnm,./"

table = str.maketrans(ru + ru.upper(), en + en.upper())

with open("input.txt", "r", encoding="utf-8") as f:
    text = f.read()

with open("output.txt", "w", encoding="utf-8") as f:
    f.write(text.translate(table))

