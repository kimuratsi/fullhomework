import  os
os.system("cls")


matn = input("matn:  ")
soz = ""

for i in range(len(matn)):
    if matn[i].isalpha():
        soz += matn[i]
        if matn[i + 1] == " ":
            break

print(soz)




