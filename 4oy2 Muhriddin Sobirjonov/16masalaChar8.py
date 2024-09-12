import  os
os.system("cls")

son = 0
text = ""
print("soz kiriting(toxtash uchun t ni bosing)")
while True:
    soz = input()
    if soz == 't':
        text += '.'
        break
    text += soz
    son += 1
    if son % 5 == 0:
        text += '.'
    text += ' '
    

print(text)



