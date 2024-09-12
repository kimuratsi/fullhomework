import  os
os.system("cls")

n = int (input("son kiriting:  "))
j = 0
for i in range(1, n + 1):
    if n % i == 0:
        j += 1
    
if j == 2:
    print("Tub son")
else: 
    print("Tub son emas")