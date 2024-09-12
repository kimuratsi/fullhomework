import  os
os.system("cls")

matn = input("matn:   ")
son = 0
for i in matn:
    if (i.isalnum()):
        son += 1

print("harflar va raqamlar soni:   ", son)




