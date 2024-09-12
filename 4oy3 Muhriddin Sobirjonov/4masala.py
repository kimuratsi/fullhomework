import os
os.system("cls")

matn = list(input("malumot:   ").split())
print(matn)

for i in range(len(matn)):
    d = len(matn[i])
    if d % 2 != 0:
        soz = matn[i][:: - 1]
        matn.pop(i)
        matn.insert(i, soz)
        
print(matn)




