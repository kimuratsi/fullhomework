import os
os.system("cls")

nom = input("nom kiriting:   ").split()
ls = []
for i in nom:
    for j in i:
        if (j.isalpha()):
            ls.append(j)

file = open("new1text.txt", "w")
ls.sort(reverse=True)
print(*ls)
for i in ls:
    file.write(i)
    file.write(" ")
file.close()

file1 = open("new2text.txt", "w")
ls.sort()
print(*ls)
for i in ls:
    file1.write(i)
    file1.write(" ")
file1.close()



