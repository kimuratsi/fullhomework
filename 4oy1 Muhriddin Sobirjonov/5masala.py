import  os
os.system("cls")

a, b, c, d = map(int,  input("4 ta son kiriting   ").split())

if  a % 2 == 0:
    a += 10
else:
    a *= 3  
if  b % 2 == 0:
    b += 10
else:
    b *= 3
if  c % 2 == 0:
    c += 10
else:
    c *= 3    
if  d % 2 == 0:
    d += 10
else:
    d *= 3  

print(a, b, c, d, sep="  ")

