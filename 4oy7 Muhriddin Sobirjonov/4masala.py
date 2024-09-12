import os
os.system("cls")

son = 0
file = open("4masala.txt", "r")
matn = file.readline()
for i in matn:
    if (i.isdigit()):
        son += 1
print("raqamlar soni:  ", son)


file.close()







