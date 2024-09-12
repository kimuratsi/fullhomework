import os
os.system("cls")

ls = [int(input()) for i in range(int(input("N:    ")))]

for i  in range(len(ls)):
    n = ls[i]
    while n > 10:
        n //= 10
    if n % 2 == 0:
        print(ls[i], end= "  ")








