import os
os.system("cls")

ls = []
file = open("1masala.txt", "r")
matn = file.readlines()
print(matn)
for i in matn:
    ls.extend(i.split())
print(ls[0], "  ", ls[0])
    







