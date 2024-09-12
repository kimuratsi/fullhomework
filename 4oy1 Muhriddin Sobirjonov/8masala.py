import  os
os.system("cls")

a, b, c, d = map (int, input("4 ta son kiriting  ").split())
juft = 0
if  a % 2 == 0:
    juft += 1
if  b % 2 == 0:
    juft += 1
if  c % 2 == 0:
    juft += 1
if  d % 2 == 0:
    juft += 1

if juft >= 2:
    print(a, b, c, d, sep="  ")
else:
    print(0)




