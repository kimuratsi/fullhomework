import os
os.system("cls")

nom = int(input("raqamlarni kiriting:    "))
ls = []
while nom > 0:
    ls.append(nom % 10)
    nom //= 10

file = open("new1.txt", "w")
ls.sort(reverse=True)
print("teskari tartibda:  ", ls)
for i in ls:
    file.write(str(i))
    file.write(" ")
file.close()
ls.sort()
print("togri tartibda:  ", ls)
file1 = open("new2.txt", "w")
for i in ls:
    file1.write(str(i))
    file1.write(" ")
file1.close()