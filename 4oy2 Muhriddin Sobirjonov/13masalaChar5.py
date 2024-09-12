import  os
os.system("cls")

matn = input("matn:   ")

space = 0

for i in matn:
    if (i.isspace()):
        space += 1
        
print("space soni :   ", space)




