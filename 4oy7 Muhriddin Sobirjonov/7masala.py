import os
os.system("cls")

summa = ""
file = open("7masala.txt", "r")
matn = file.readline()
for i in matn:
    if (i.isdigit()):
        summa += i
    elif summa != "" and summa[-1] != "+":
        summa += "+"
print(summa)          
file.close()







