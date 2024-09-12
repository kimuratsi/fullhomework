import  os
os.system("cls")

matn = input("matn:  ")
son = 0
for i in matn:
    if (i.isalpha()):
       son += 1
print(son, " ta harf bor") 