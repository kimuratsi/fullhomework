import os
os.system("cls")

son = 0
file = open("3masala.txt", "r")
matn = file.readline()
for i in matn:
    if (i.isalpha()):
        son += 1
print("harflar soni:  ", son)


file.close()







