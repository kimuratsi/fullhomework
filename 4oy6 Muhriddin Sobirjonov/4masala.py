import os
os.system("cls")

ls = list(map(int, input("N:   ").split()))
print(ls)

ls1 = list(map(lambda x: x ** 2, ls))
print(ls1)

