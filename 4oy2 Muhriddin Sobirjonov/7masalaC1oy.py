import  os
os.system("cls")

a = int (input("A:  "))
b = int (input("B:  "))
toq = 0; juft = 0

for i in range(a, b + 1):
    if i % 2 == 0:
        juft += i
    else: 
        toq += i
        
print(f"Juft son yigindisi:  {juft}\nToq sonlar yiginsi:  {toq}")