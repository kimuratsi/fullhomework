import os
os.system("cls")

ls, ls1 = [], []
file = open("countries.txt", "r")
davlat = file.readline()
ls.extend(davlat.split())
file.close()

file1 = open("capitals.txt", "r")
poytaxt = file1.readline()
ls1.extend(poytaxt.split())
file1.close()

f = open("8masala.txt", "w")
for i in range(len(ls)):
    f.writelines(ls[i] + " - " + ls1[i] + "\n")
f.close()

f1 = open("8masala.txt", "r")
natija = f1.readlines()
print(*natija)
f1.close()

