import  os
os.system("cls")

a = int (input("A:  "))
b = int (input("B:  "))

for i in range(a, b + 1, 1):
    print(i ** 2, end="  ")
