import  os
os.system("cls")

son = int (input("son kiriting:   "))
n = son % 10
while son > 0:
    m = son % 10
    son //= 10

if  n < m:
    print(m)
else:
    print(n)


