import os
os.system("cls")

son = int (input("Bitta son kiriting:   "))
n = son % 10

while son > 0:
    i = son % 10
    if n < i:
        n = i
    son //= 10
print("Eng katta raqam:  ", n)