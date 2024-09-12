import os
os.system("cls")
a, b, c, d, e, f = map(int , input("6 ta son kiriting:   ").split())
toq = 0; juft = 0

if  a % 2 == 0:
    juft += 1
else:
    toq += 1
if  b % 2 == 0:
    juft +=1
else:
    toq += 1
if  c % 2 == 0:
    juft += 1
else:
    toq += 1
if  d % 2 == 0:
    juft += 1
else:
    toq += 1
if  e % 2 == 0:
    juft += 1
else:
    toq += 1
if  f % 2 == 0:
    juft += 1
else:
    toq += 1
    
print("Juft sonlar  ", juft)
print("Toq sonlar   ", toq)