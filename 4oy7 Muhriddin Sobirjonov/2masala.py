import os
os.system("cls")

ls, ls1 = [], []
file = open("2masala.txt", "r")
matn = file.readlines()
for i in matn:
    ls1.extend(i.split("."))
for i in ls1:
    ls.extend(i.split())
print(ls[-1], "  ", ls[-1])
file.close()



