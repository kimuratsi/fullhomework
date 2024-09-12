import  os
os.system("cls")

soz = input("soz:  ")
s = []
harf = input("harf:   ")
soz1 = ""
for i in soz:
    if i == harf:
        soz1 += i.upper()
    else:
        soz1 += i
print(soz1)
s.append(soz1)
print(s)







