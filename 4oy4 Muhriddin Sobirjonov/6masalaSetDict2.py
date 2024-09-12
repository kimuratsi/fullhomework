import os
os.system("cls")

n = int(input("N:   "))
key = []
val = []

for i in range(1, n):
    key.append(i)
    m = i ** 2
    val.append(m)

dic = dict(zip(key, val))
print(dic)











