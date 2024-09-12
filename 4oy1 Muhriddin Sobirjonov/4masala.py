import  os
os.system("cls")

a, b, c = map(int, input("3 ta son kiriting:   ").split())
yig = 0

if  a % 2 == 0:
    yig += a
if  b % 2 == 0:
    yig += b
if  c % 2 == 0:
    yig += c

print("Juft sonlar yigindisi:  ", yig)