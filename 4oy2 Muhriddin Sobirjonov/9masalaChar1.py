import  os
os.system("cls")

text = input("matn:  ")
matn = ""

for i in range(len(text)):
    if text[i] == 'a' or text[i] == 'A':
        matn += 'b'
    elif text[i] == 'b' or text[i] == 'B':
        matn += 'a'
    else:
        matn += text[i]
print(matn)














