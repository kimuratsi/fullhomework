import os
# os.system("cls")

text = input("Matn:  ")
soz = []
gap = []
w = ""

for i in text:
    if (i != '.'):
        w += i
    else:
        gap.append(w)
        w = ""
d = len(text) - 1
for j in text:
    if (j.isalpha()):
        w += j
    elif (j.isspace()):
        soz.append(w)
        w = ""
soz.append(w)
print(soz)
print(gap)


