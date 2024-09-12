import os
os.system("cls")

n = int (input("dictionary malumotlari soni:  "))
k = []
val = []

for i in range(n):
    k.append(i + 1)
    q = int(input("qiymat:  "))
    val.append(q)
dic = dict(zip(k, val))
print(dic)

for i in range(3):
    son = max(dic.values())
    for kalit, qiymat in dic.items():
        if son == qiymat:
            key = kalit
    print(key, end="  ")
    dic.pop(key)
    






