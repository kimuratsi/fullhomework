import os
os.system("cls")

n = int(input("dictinary keyslar va malumotlarini sonini kiriting:   "))
k = []
val = []
print("1-chi dictionary fayl:")
for i in range(n):
    key = int(input("key:  "))
    k.append(key)
    qiymat = input("value:  ")
    val.append(qiymat)
d1 = dict(zip(k, val))
k.clear()
val.clear()

print("2-chi dictionary fayl:")
for i in range(n):
    key = int(input("key:  "))
    k.append(key)
    qiymat = input("value:  ")
    val.append(qiymat)
d2 = dict(zip(k, val))
k.clear()
val.clear()

print("3-chi dictionary fayl:")
for i in range(n):
    key = int(input("key:  "))
    k.append(key)
    qiymat = input("value:  ")
    val.append(qiymat)
d3 = dict(zip(k, val))
k.clear()
val.clear()

print(d1)
print(d2)
print(d3)

dic = dict()
dic.update(d1)
dic.update(d2)
dic.update(d3)

print("\n")
print(dic)


