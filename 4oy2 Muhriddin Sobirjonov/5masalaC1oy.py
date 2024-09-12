import  os
os.system("cls")

son = int (input("son kiriting:  "))
yig = 0

while son > 0:
    i = son % 10
    son //=10
    if i % 2 != 0:
        print(i, end="")
        son1 = son
        yig += i
        break

while son1 > 0:
    i = son1 % 10
    son1 //= 10
    if i % 2 != 0:
        print(" + ", i, end="")
        yig += i


print(" = ", yig)

