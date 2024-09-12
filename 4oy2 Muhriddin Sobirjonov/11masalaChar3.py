import  os
os.system("cls")

matn = input("matn:  ")
son = 0
for i in matn:
    if (i.isdigit()):
       son += 1
print(son, " ta raqam bor") 